// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_2022040010_top.h for the primary calling header

#include "Vysyx_2022040010_top___024root.h"
#include "Vysyx_2022040010_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern const VlWide<10>/*319:0*/ Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0;

VL_INLINE_OPT void Vysyx_2022040010_top___024root___sequent__TOP__17(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___sequent__TOP__17\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    CData/*1:0*/ __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
    VlWide<5>/*128:0*/ __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend;
    VlWide<3>/*95:0*/ __Vtemp38418;
    VlWide<5>/*159:0*/ __Vtemp38420;
    VlWide<4>/*127:0*/ __Vtemp38426;
    VlWide<3>/*95:0*/ __Vtemp38432;
    VlWide<3>/*95:0*/ __Vtemp38433;
    VlWide<3>/*95:0*/ __Vtemp38434;
    VlWide<3>/*95:0*/ __Vtemp38441;
    VlWide<3>/*95:0*/ __Vtemp38442;
    VlWide<3>/*95:0*/ __Vtemp38448;
    VlWide<3>/*95:0*/ __Vtemp38449;
    VlWide<3>/*95:0*/ __Vtemp38453;
    VlWide<3>/*95:0*/ __Vtemp38454;
    VlWide<3>/*95:0*/ __Vtemp38455;
    VlWide<3>/*95:0*/ __Vtemp38461;
    VlWide<3>/*95:0*/ __Vtemp38462;
    VlWide<3>/*95:0*/ __Vtemp38463;
    VlWide<3>/*95:0*/ __Vtemp38481;
    VlWide<3>/*95:0*/ __Vtemp38482;
    VlWide<3>/*95:0*/ __Vtemp38483;
    VlWide<3>/*95:0*/ __Vtemp38492;
    VlWide<3>/*95:0*/ __Vtemp38493;
    VlWide<3>/*95:0*/ __Vtemp38494;
    VlWide<3>/*95:0*/ __Vtemp38504;
    VlWide<3>/*95:0*/ __Vtemp38516;
    VlWide<3>/*95:0*/ __Vtemp38517;
    VlWide<3>/*95:0*/ __Vtemp38518;
    VlWide<3>/*95:0*/ __Vtemp38527;
    VlWide<3>/*95:0*/ __Vtemp38528;
    VlWide<3>/*95:0*/ __Vtemp38529;
    VlWide<3>/*95:0*/ __Vtemp38539;
    VlWide<3>/*95:0*/ __Vtemp38551;
    VlWide<3>/*95:0*/ __Vtemp38552;
    VlWide<3>/*95:0*/ __Vtemp38553;
    VlWide<3>/*95:0*/ __Vtemp38562;
    VlWide<3>/*95:0*/ __Vtemp38563;
    VlWide<3>/*95:0*/ __Vtemp38564;
    VlWide<3>/*95:0*/ __Vtemp38574;
    VlWide<3>/*95:0*/ __Vtemp38586;
    VlWide<3>/*95:0*/ __Vtemp38587;
    VlWide<3>/*95:0*/ __Vtemp38588;
    VlWide<3>/*95:0*/ __Vtemp38597;
    VlWide<3>/*95:0*/ __Vtemp38598;
    VlWide<3>/*95:0*/ __Vtemp38599;
    VlWide<3>/*95:0*/ __Vtemp38609;
    VlWide<3>/*95:0*/ __Vtemp38621;
    VlWide<3>/*95:0*/ __Vtemp38622;
    VlWide<3>/*95:0*/ __Vtemp38623;
    VlWide<3>/*95:0*/ __Vtemp38632;
    VlWide<3>/*95:0*/ __Vtemp38633;
    VlWide<3>/*95:0*/ __Vtemp38634;
    VlWide<3>/*95:0*/ __Vtemp38644;
    VlWide<3>/*95:0*/ __Vtemp38656;
    VlWide<3>/*95:0*/ __Vtemp38657;
    VlWide<3>/*95:0*/ __Vtemp38658;
    VlWide<3>/*95:0*/ __Vtemp38667;
    VlWide<3>/*95:0*/ __Vtemp38668;
    VlWide<3>/*95:0*/ __Vtemp38669;
    VlWide<3>/*95:0*/ __Vtemp38679;
    VlWide<3>/*95:0*/ __Vtemp38691;
    VlWide<3>/*95:0*/ __Vtemp38692;
    VlWide<3>/*95:0*/ __Vtemp38693;
    VlWide<3>/*95:0*/ __Vtemp38702;
    VlWide<3>/*95:0*/ __Vtemp38703;
    VlWide<3>/*95:0*/ __Vtemp38704;
    VlWide<3>/*95:0*/ __Vtemp38714;
    VlWide<3>/*95:0*/ __Vtemp38726;
    VlWide<3>/*95:0*/ __Vtemp38727;
    VlWide<3>/*95:0*/ __Vtemp38728;
    VlWide<3>/*95:0*/ __Vtemp38737;
    VlWide<3>/*95:0*/ __Vtemp38738;
    VlWide<3>/*95:0*/ __Vtemp38739;
    VlWide<3>/*95:0*/ __Vtemp38749;
    VlWide<3>/*95:0*/ __Vtemp38761;
    VlWide<3>/*95:0*/ __Vtemp38762;
    VlWide<3>/*95:0*/ __Vtemp38763;
    VlWide<3>/*95:0*/ __Vtemp38772;
    VlWide<3>/*95:0*/ __Vtemp38773;
    VlWide<3>/*95:0*/ __Vtemp38774;
    VlWide<3>/*95:0*/ __Vtemp38784;
    VlWide<3>/*95:0*/ __Vtemp38796;
    VlWide<3>/*95:0*/ __Vtemp38797;
    VlWide<3>/*95:0*/ __Vtemp38798;
    VlWide<3>/*95:0*/ __Vtemp38807;
    VlWide<3>/*95:0*/ __Vtemp38808;
    VlWide<3>/*95:0*/ __Vtemp38809;
    VlWide<3>/*95:0*/ __Vtemp38819;
    VlWide<3>/*95:0*/ __Vtemp38831;
    VlWide<3>/*95:0*/ __Vtemp38832;
    VlWide<3>/*95:0*/ __Vtemp38833;
    VlWide<3>/*95:0*/ __Vtemp38842;
    VlWide<3>/*95:0*/ __Vtemp38843;
    VlWide<3>/*95:0*/ __Vtemp38844;
    VlWide<3>/*95:0*/ __Vtemp38854;
    VlWide<3>/*95:0*/ __Vtemp38866;
    VlWide<3>/*95:0*/ __Vtemp38867;
    VlWide<3>/*95:0*/ __Vtemp38868;
    VlWide<3>/*95:0*/ __Vtemp38877;
    VlWide<3>/*95:0*/ __Vtemp38878;
    VlWide<3>/*95:0*/ __Vtemp38879;
    VlWide<3>/*95:0*/ __Vtemp38889;
    VlWide<3>/*95:0*/ __Vtemp38901;
    VlWide<3>/*95:0*/ __Vtemp38902;
    VlWide<3>/*95:0*/ __Vtemp38903;
    VlWide<3>/*95:0*/ __Vtemp38912;
    VlWide<3>/*95:0*/ __Vtemp38913;
    VlWide<3>/*95:0*/ __Vtemp38914;
    VlWide<3>/*95:0*/ __Vtemp38924;
    VlWide<3>/*95:0*/ __Vtemp38936;
    VlWide<3>/*95:0*/ __Vtemp38937;
    VlWide<3>/*95:0*/ __Vtemp38938;
    VlWide<3>/*95:0*/ __Vtemp38947;
    VlWide<3>/*95:0*/ __Vtemp38948;
    VlWide<3>/*95:0*/ __Vtemp38949;
    VlWide<3>/*95:0*/ __Vtemp38959;
    VlWide<3>/*95:0*/ __Vtemp38971;
    VlWide<3>/*95:0*/ __Vtemp38972;
    VlWide<3>/*95:0*/ __Vtemp38973;
    VlWide<3>/*95:0*/ __Vtemp38982;
    VlWide<3>/*95:0*/ __Vtemp38983;
    VlWide<3>/*95:0*/ __Vtemp38984;
    VlWide<3>/*95:0*/ __Vtemp38994;
    VlWide<3>/*95:0*/ __Vtemp39006;
    VlWide<3>/*95:0*/ __Vtemp39007;
    VlWide<3>/*95:0*/ __Vtemp39008;
    VlWide<3>/*95:0*/ __Vtemp39017;
    VlWide<3>/*95:0*/ __Vtemp39018;
    VlWide<3>/*95:0*/ __Vtemp39019;
    VlWide<3>/*95:0*/ __Vtemp39029;
    VlWide<3>/*95:0*/ __Vtemp39041;
    VlWide<3>/*95:0*/ __Vtemp39042;
    VlWide<3>/*95:0*/ __Vtemp39043;
    VlWide<3>/*95:0*/ __Vtemp39052;
    VlWide<3>/*95:0*/ __Vtemp39053;
    VlWide<3>/*95:0*/ __Vtemp39054;
    VlWide<3>/*95:0*/ __Vtemp39064;
    VlWide<3>/*95:0*/ __Vtemp39076;
    VlWide<3>/*95:0*/ __Vtemp39077;
    VlWide<3>/*95:0*/ __Vtemp39078;
    VlWide<3>/*95:0*/ __Vtemp39087;
    VlWide<3>/*95:0*/ __Vtemp39088;
    VlWide<3>/*95:0*/ __Vtemp39089;
    VlWide<3>/*95:0*/ __Vtemp39099;
    VlWide<3>/*95:0*/ __Vtemp39111;
    VlWide<3>/*95:0*/ __Vtemp39112;
    VlWide<3>/*95:0*/ __Vtemp39113;
    VlWide<3>/*95:0*/ __Vtemp39122;
    VlWide<3>/*95:0*/ __Vtemp39123;
    VlWide<3>/*95:0*/ __Vtemp39124;
    VlWide<3>/*95:0*/ __Vtemp39134;
    VlWide<3>/*95:0*/ __Vtemp39146;
    VlWide<3>/*95:0*/ __Vtemp39147;
    VlWide<3>/*95:0*/ __Vtemp39148;
    VlWide<3>/*95:0*/ __Vtemp39157;
    VlWide<3>/*95:0*/ __Vtemp39158;
    VlWide<3>/*95:0*/ __Vtemp39159;
    VlWide<3>/*95:0*/ __Vtemp39169;
    VlWide<3>/*95:0*/ __Vtemp39181;
    VlWide<3>/*95:0*/ __Vtemp39182;
    VlWide<3>/*95:0*/ __Vtemp39183;
    VlWide<3>/*95:0*/ __Vtemp39192;
    VlWide<3>/*95:0*/ __Vtemp39193;
    VlWide<3>/*95:0*/ __Vtemp39194;
    VlWide<3>/*95:0*/ __Vtemp39204;
    VlWide<3>/*95:0*/ __Vtemp39216;
    VlWide<3>/*95:0*/ __Vtemp39217;
    VlWide<3>/*95:0*/ __Vtemp39218;
    VlWide<3>/*95:0*/ __Vtemp39227;
    VlWide<3>/*95:0*/ __Vtemp39228;
    VlWide<3>/*95:0*/ __Vtemp39229;
    VlWide<3>/*95:0*/ __Vtemp39239;
    VlWide<3>/*95:0*/ __Vtemp39251;
    VlWide<3>/*95:0*/ __Vtemp39252;
    VlWide<3>/*95:0*/ __Vtemp39253;
    VlWide<3>/*95:0*/ __Vtemp39262;
    VlWide<3>/*95:0*/ __Vtemp39263;
    VlWide<3>/*95:0*/ __Vtemp39264;
    VlWide<3>/*95:0*/ __Vtemp39274;
    VlWide<3>/*95:0*/ __Vtemp39286;
    VlWide<3>/*95:0*/ __Vtemp39287;
    VlWide<3>/*95:0*/ __Vtemp39288;
    VlWide<3>/*95:0*/ __Vtemp39297;
    VlWide<3>/*95:0*/ __Vtemp39298;
    VlWide<3>/*95:0*/ __Vtemp39299;
    VlWide<3>/*95:0*/ __Vtemp39309;
    VlWide<3>/*95:0*/ __Vtemp39321;
    VlWide<3>/*95:0*/ __Vtemp39322;
    VlWide<3>/*95:0*/ __Vtemp39323;
    VlWide<3>/*95:0*/ __Vtemp39332;
    VlWide<3>/*95:0*/ __Vtemp39333;
    VlWide<3>/*95:0*/ __Vtemp39334;
    VlWide<3>/*95:0*/ __Vtemp39344;
    VlWide<3>/*95:0*/ __Vtemp39356;
    VlWide<3>/*95:0*/ __Vtemp39357;
    VlWide<3>/*95:0*/ __Vtemp39358;
    VlWide<3>/*95:0*/ __Vtemp39367;
    VlWide<3>/*95:0*/ __Vtemp39368;
    VlWide<3>/*95:0*/ __Vtemp39369;
    VlWide<3>/*95:0*/ __Vtemp39379;
    VlWide<3>/*95:0*/ __Vtemp39391;
    VlWide<3>/*95:0*/ __Vtemp39392;
    VlWide<3>/*95:0*/ __Vtemp39393;
    VlWide<3>/*95:0*/ __Vtemp39402;
    VlWide<3>/*95:0*/ __Vtemp39403;
    VlWide<3>/*95:0*/ __Vtemp39404;
    VlWide<3>/*95:0*/ __Vtemp39414;
    VlWide<3>/*95:0*/ __Vtemp39426;
    VlWide<3>/*95:0*/ __Vtemp39427;
    VlWide<3>/*95:0*/ __Vtemp39428;
    VlWide<3>/*95:0*/ __Vtemp39437;
    VlWide<3>/*95:0*/ __Vtemp39438;
    VlWide<3>/*95:0*/ __Vtemp39439;
    VlWide<3>/*95:0*/ __Vtemp39449;
    VlWide<3>/*95:0*/ __Vtemp39461;
    VlWide<3>/*95:0*/ __Vtemp39462;
    VlWide<3>/*95:0*/ __Vtemp39463;
    VlWide<3>/*95:0*/ __Vtemp39472;
    VlWide<3>/*95:0*/ __Vtemp39473;
    VlWide<3>/*95:0*/ __Vtemp39474;
    VlWide<3>/*95:0*/ __Vtemp39484;
    VlWide<3>/*95:0*/ __Vtemp39496;
    VlWide<3>/*95:0*/ __Vtemp39497;
    VlWide<3>/*95:0*/ __Vtemp39498;
    VlWide<3>/*95:0*/ __Vtemp39507;
    VlWide<3>/*95:0*/ __Vtemp39508;
    VlWide<3>/*95:0*/ __Vtemp39509;
    VlWide<3>/*95:0*/ __Vtemp39519;
    VlWide<3>/*95:0*/ __Vtemp39531;
    VlWide<3>/*95:0*/ __Vtemp39532;
    VlWide<3>/*95:0*/ __Vtemp39533;
    VlWide<3>/*95:0*/ __Vtemp39542;
    VlWide<3>/*95:0*/ __Vtemp39543;
    VlWide<3>/*95:0*/ __Vtemp39544;
    VlWide<3>/*95:0*/ __Vtemp39554;
    QData/*63:0*/ __Vdlyvval__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    // Body
    __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
    __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U];
    __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U];
    __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U];
    __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U];
    __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U];
    __Vdlyvset__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__dsram_rdata_r = 0ULL;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__dsram_rdata_r 
            = vlSelf->dsram_rdata;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U] 
            = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U] 
            = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg 
                       >> 0x20U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U];
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (VL_UNLIKELY(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                          >> 5U) & (0U != (0x1fU & 
                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]))))) {
            VL_WRITEF("rd = %x\n",64,(((QData)((IData)(
                                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U]))));
            __Vdlyvval__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 
                = (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])));
            __Vdlyvset__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 = 1U;
            __Vdlyvdim0__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 
                = (0x1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]);
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over = 0U;
    } else if ((2U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] 
                = (IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] 
                = (IData)(((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))) 
                           >> 0x20U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] 
                = (IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                            >> 1U))));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] 
                = (IData)(((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                             >> 1U))) 
                           >> 0x20U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over = 1U;
            if ((1U & (~ (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start)))) {
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 0U;
                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over = 0U;
                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] = 0U;
                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] = 0U;
                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] = 0U;
                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] = 0U;
            }
        } else if ((0x40U != (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt))) {
            if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U])) {
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                    = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                       << 1U);
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                    = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                        >> 0x1fU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                                     << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                    = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                        >> 0x1fU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                                     << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                    = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                        >> 0x1fU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                                     << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
                    = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                       >> 0x1fU);
            } else {
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                    = (1U | ((IData)((((QData)((IData)(
                                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U])))) 
                             << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                    = (((IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U])))) 
                        >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                    = (((IData)(((((QData)((IData)(
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))) 
                                 >> 0x20U)) >> 0x1fU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U])))) 
                          << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                    = (((IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U])))) 
                        >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U]))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
                    = ((IData)(((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U]))) 
                                >> 0x20U)) >> 0x1fU);
            }
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt)));
        } else {
            if (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed) 
                 & ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i 
                             >> 0x3fU)) ^ (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i 
                                                   >> 0x3fU))))) {
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                    = (IData)((1ULL + (~ (((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))))));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                    = (IData)(((1ULL + (~ (((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))))) 
                               >> 0x20U));
            }
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt = 0U;
            if (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed) 
                 & ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i 
                             >> 0x3fU)) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U]))) {
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                    = ((1U & __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]) 
                       | ((IData)((1ULL + (~ (((QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                    >> 1U)))))) 
                          << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                    = (((IData)((1ULL + (~ (((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                  >> 1U)))))) 
                        >> 0x1fU) | ((IData)(((1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                         >> 1U))))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
                    = ((IData)(((1ULL + (~ (((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                  >> 1U))))) 
                                >> 0x20U)) >> 0x1fU);
            }
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state))) {
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] = 0U;
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] = 0U;
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] = 0U;
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] = 0U;
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] = 0U;
        __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 3U;
    } else if (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start) {
        if ((0ULL == vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i)) {
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 1U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt = 0U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] = 0U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] = 0U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] = 0U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] = 0U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] = 0U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 2U;
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                = ((1U & __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]) 
                   | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1) 
                      << 1U));
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                = (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1) 
                    >> 0x1fU) | ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                = ((0xfffffffeU & __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]) 
                   | ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 
                               >> 0x20U)) >> 0x1fU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 
                = (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed) 
                    & (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i 
                               >> 0x3fU))) ? (1ULL 
                                              + (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i))
                    : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2 
                = (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed) 
                    & (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i 
                               >> 0x3fU))) ? (1ULL 
                                              + (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i))
                    : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i);
        }
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] = 0U;
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__buf_inst = 0U;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__flag = 0U;
    __Vtemp38418[2U] = ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw)) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw)) 
                         << 0x1fU) | (((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                       << 0x1eU) | 
                                      ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw) 
                                                                    << 0x14U) 
                                                                   | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                                      << 0x13U))))))))))) 
                                       | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                     << 0xfU) 
                                                    | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                       << 0xeU))))) 
                                          | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                     << 0xbU) 
                                                    | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw) 
                                                       << 0xaU)))) 
                                             | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci)))))))))))))));
    __Vtemp38420[0U] = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                         << 0x1bU) | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__alu_op) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2) 
                                                       << 8U) 
                                                      | (((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                                          << 7U) 
                                                         | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                                             << 6U) 
                                                            | ((0x20U 
                                                                & ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x3fe0U 
                                                                                & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                                | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                                                                                >> 0x12U)) 
                                                                                | (0x3fffe0U 
                                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                                                >> 0xaU))) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci) 
                                                                                << 5U)) 
                                                                               | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                                                                << 5U)) 
                                                                              | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                                                                << 5U)) 
                                                                             | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                                                << 5U)) 
                                                                            | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                                               << 5U)) 
                                                                           | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                                                              << 5U)) 
                                                                          | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                                             << 5U)) 
                                                                         | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                                                            << 5U)) 
                                                                        | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                                           << 5U)) 
                                                                       | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                                          << 5U)) 
                                                                      | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                                         << 5U)) 
                                                                     | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw) 
                                                                        << 5U)) 
                                                                    | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                                       << 5U)) 
                                                                   | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw) 
                                                                      << 5U))) 
                                                               | (0x1fU 
                                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                     >> 7U)))))))));
    __Vtemp38426[0U] = (IData)((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                  >> 5U) & ((0x1fU 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                            == (0x1fU 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x14U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                 : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                     : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x14U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                         : ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x14U)))
                                                 ? 0ULL
                                                 : 
                                                (((((0x1fU 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0x14U)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                      >> 5U)) 
                                                  & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2)
                                                   ? 
                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0x14U))]
                                                   : 0ULL))))))));
    __Vtemp38426[1U] = (IData)(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                   >> 5U) & ((0x1fU 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                  : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                       >> 5U) & ((0x1fU 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x14U))))
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                      : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                           >> 5U) & 
                                          ((0x1fU & 
                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                           == (0x1fU 
                                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x14U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : 
                                                 (((((0x1fU 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0x14U)) 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                       >> 5U)) 
                                                   & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                   : 
                                                  ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2)
                                                    ? 
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0x14U))]
                                                    : 0ULL))))))) 
                                >> 0x20U));
    __Vtemp38426[2U] = (IData)((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                  >> 5U) & ((0x1fU 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                            == (0x1fU 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0xfU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                 : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                     : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0xfU))))
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                         : ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0xfU)))
                                                 ? 0ULL
                                                 : 
                                                (((((0x1fU 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xfU)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                      >> 5U)) 
                                                  & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1)
                                                   ? 
                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0xfU))]
                                                   : 0ULL))))))));
    __Vtemp38426[3U] = (IData)(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                   >> 5U) & ((0x1fU 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                  : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                       >> 5U) & ((0x1fU 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0xfU))))
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                      : (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                           >> 5U) & 
                                          ((0x1fU & 
                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                           == (0x1fU 
                                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 (((((0x1fU 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xfU)) 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                       >> 5U)) 
                                                   & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                   : 
                                                  ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1)
                                                    ? 
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0xfU))]
                                                    : 0ULL))))))) 
                                >> 0x20U));
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[2U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[3U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[4U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[5U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[6U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[7U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[8U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
            = Vysyx_2022040010_top__ConstPool__CONST_6a3c0088_0[9U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U] 
            = __Vtemp38426[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U] 
            = __Vtemp38426[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U] 
            = __Vtemp38426[2U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U] 
            = __Vtemp38426[3U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
            = ((__Vtemp38420[0U] << 1U) | (((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
            = ((__Vtemp38420[0U] >> 0x1fU) | ((0xffffffeU 
                                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 4U)) 
                                              | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc) 
                                                 << 0x1cU)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U] 
            = ((1U & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc) 
                      >> 4U)) | ((0xffffffeU & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc) 
                                                >> 4U)) 
                                 | ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc 
                                             >> 0x20U)) 
                                    << 0x1cU)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U] 
            = ((1U & ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc 
                               >> 0x20U)) >> 4U)) | 
               ((0xffffffeU & ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc 
                                        >> 0x20U)) 
                               >> 4U)) | (__Vtemp38418[2U] 
                                          << 0x1cU)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
            = ((1U & (__Vtemp38418[2U] >> 4U)) | ((
                                                   (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                   << 0x1fU) 
                                                  | (((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                      << 0x1eU) 
                                                     | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                            << 0x1cU) 
                                                           | (0xffffffeU 
                                                              & (__Vtemp38418[2U] 
                                                                 >> 4U)))))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
            = ((0xfffffffeU & (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                << 2U) | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak) 
                                          << 1U))) 
               | (1U & ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                        | (((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                            >> 1U) | (((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                       >> 2U) | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                  >> 3U) 
                                                 | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                    >> 4U)))))));
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state 
        = __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
        = __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
        = __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
        = __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
        = __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
        = __Vdly__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U];
    if (__Vdlyvset__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[__Vdlyvdim0__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0] 
            = __Vdlyvval__ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg 
        = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg 
        = ((IData)(vlSelf->rst) ? 0x80000000ULL : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__next_pc);
    VL_EXTEND_WQ(65,64, __Vtemp38432, (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp38433, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor);
    VL_SUB_W(3, __Vtemp38434, __Vtemp38432, __Vtemp38433);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U] 
        = __Vtemp38434[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U] 
        = __Vtemp38434[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U] 
        = (1U & __Vtemp38434[2U]);
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U] = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U] 
            = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U] 
            = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                       >> 0x20U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
            = (((IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                          << 0x33U) | (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                        << 0x13U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                        >> 0xdU)))) 
                << 6U) | ((0x20U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U]) 
                          | (0x1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U] 
            = (((IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                          << 0x33U) | (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                        << 0x13U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                        >> 0xdU)))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                           >> 0xdU))) 
                                      >> 0x20U)) << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U] 
            = ((IData)(((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                          << 0x33U) | (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                        << 0x13U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                        >> 0xdU))) 
                        >> 0x20U)) >> 0x1aU);
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_S 
        = ((0xfe0U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                      >> 0x10U)) | (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                             >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_J 
        = ((0x100000U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                         >> 7U)) | ((0xff000U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                 << 4U)) 
                                    | ((0x800U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 5U)) 
                                       | (0x7feU & 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                           >> 0x10U)))));
    vlSelf->dsram_e = (1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                             >> 8U));
    vlSelf->dsram_wdata = ((0x40000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                            ? (QData)((IData)((0xffU 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                            : ((0x20000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                ? (QData)((IData)((0xffffU 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                : ((0x10000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                    ? (QData)((IData)(
                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))
                                    : (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo 
        = ((4U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo)) 
           | ((2U & (((0xffffeU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                   >> 0xcU)) | (0x1ffffeU 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                   >> 0xbU))) 
                     | (0xffffeU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                    >> 0xcU)))) | (1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                      >> 0xaU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo 
        = ((3U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo)) 
           | (4U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 0xcU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_res_sel 
        = ((2U & ((((0xffffffeU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                   >> 4U)) | (0x1ffffffeU 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 3U))) 
                   | (0x3ffffffeU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                     >> 2U))) | (0x7ffffffeU 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                    >> 1U)))) 
           | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                       >> 9U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                 >> 8U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 7U)) 
                    | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                       >> 6U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed 
        = (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 9U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                              >> 7U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                         >> 5U)) | 
                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                  >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned 
        = (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                              >> 6U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                         >> 4U)) | 
                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                  >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B 
        = ((0x1000U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                       >> 0xfU)) | ((0x800U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                               << 8U)) 
                                    | ((0x7e0U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)) 
                                       | (0x1eU & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                   >> 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                      >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                   >> 0x19U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 0x18U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
        = ((0x4000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                << 0x24U) | (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                        >> 0x1cU)))
            : ((0x8000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? 0ULL : ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
                           ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
                           : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend 
        = (((- (QData)((IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                      >> 0x1bU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
            ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
            : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
            ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
            : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
        = ((2U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_res_sel))
            ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U])))
            : ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_res_sel))
                ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U])))
                : 0ULL));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B) 
                                      >> 0xbU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp 
        = (((0x100000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
             ? 0U : 1U) ? (((QData)((IData)((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                             >> 1U)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                >> 2U)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 3U)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                      >> 4U)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 5U)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 6U)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 7U)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 8U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 9U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xaU)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 0x20U)) 
                                                          << 0x1fU) 
                                                         | ((0x40000000U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 0x21U)) 
                                                                << 0x1eU)) 
                                                            | ((0x20000000U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 0x22U)) 
                                                                   << 0x1dU)) 
                                                               | ((0x10000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 0x23U)) 
                                                                      << 0x1cU)) 
                                                                  | ((0x8000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x24U)) 
                                                                         << 0x1bU)) 
                                                                     | ((0x4000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x25U)) 
                                                                            << 0x1aU)) 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x26U)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                              | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))))
            : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1);
    VL_EXTEND_WI(65,32, __Vtemp38441, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1));
    VL_EXTEND_WQ(65,64, __Vtemp38442, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp38441[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp38441[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp38441[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp38442[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp38442[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp38442[2U];
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2 
        = ((0x400U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend
            : ((0x800U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? (((QData)((IData)((- (IData)((1U 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                   >> 0x1bU)))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                    << 4U)))))
                : ((0x1000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                    ? (QData)((IData)((0x3fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 0x10U))))
                    : ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
                        ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
                        : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
        = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
        = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2 
                   >> 0x20U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
        = (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                >> 0xdU)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                             >> 0xaU)) 
                 & (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2 
                            >> 0x3fU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2 
        = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
            == vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
            ? 1U : 0U);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
        = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
        = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
                   >> 0x20U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[2U] 
        = (1U & (((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                     >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                 >> 0xdU)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                              >> 0xcU)) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                     >> 0xaU)) & (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
                                          >> 0x3fU))));
    vlSelf->isram_e = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    vlSelf->isram_addr = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg 
                          - 0x80000000ULL);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr 
        = ((0x20U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
            ? (4ULL + ((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                         << 0x24U) | (((QData)((IData)(
                                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                       + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
            : ((0x10U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                ? (4ULL + ((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                           >> 0x1cU))) 
                           + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                : ((8U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                    ? (4ULL + ((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                               + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                    : ((4U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                        ? (4ULL + ((((QData)((IData)(
                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                     >> 0x1cU))) 
                                   + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                        : ((2U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                            ? (4ULL + ((((QData)((IData)(
                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU))) 
                                       + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                            : ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                                ? (4ULL + ((((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                  >> 0x1cU))) 
                                           + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                : ((0x80U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                                    ? (4ULL + ((((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                      >> 0x1cU))) 
                                               + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                    : ((0x40U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                                        ? (4ULL + (
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                          >> 0x1cU))) 
                                                   + 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend)))
                                        : 0ULL))))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b 
        = ((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                    >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                 >> 0x19U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                               >> 0x18U)))
            ? (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)
            : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0U]) | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                            >> 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0U]) | (2U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                           & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              << 1U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[1U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [1U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 1U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 2U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 3U))) 
                           + (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 2U))) 
                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[1U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [1U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 1U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 2U)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 3U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 3U))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[2U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [2U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 3U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 4U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 5U))) 
                           + (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 3U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 4U))) 
                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 5U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[2U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [2U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 3U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 4U)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 5U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 4U)) 
                                           & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 5U))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[3U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [3U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 5U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 6U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 7U))) 
                           + (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 6U))) 
                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 7U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[3U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [3U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 6U)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 7U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 6U)) 
                                           & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 7U))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[4U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [4U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 7U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 8U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 9U))) 
                           + (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 7U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 8U))) 
                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[4U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [4U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 7U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 8U)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 9U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 8U)) 
                                           & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 9U))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[5U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [5U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 9U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 0xaU)) & 
                            (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xbU))) + (((~ (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xaU))) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xbU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[5U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [5U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 9U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0xaU)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xbU)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xaU)) 
                                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xbU))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[6U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [6U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xbU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0xcU)) 
                            & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xdU))) + (((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xbU)) 
                                                 & (~ 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                     >> 0xcU))) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xdU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[6U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [6U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xbU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0xcU)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xdU)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xcU)) 
                                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xdU))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[7U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [7U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xdU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0xeU)) 
                            & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xfU))) + (((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xdU)) 
                                                 & (~ 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                     >> 0xeU))) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[7U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [7U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xdU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0xeU)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xfU)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xeU)) 
                                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xfU))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[8U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [8U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xfU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0x10U)) 
                            & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x11U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0xfU)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x10U))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x11U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[8U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [8U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xfU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0x10U)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x11U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x10U)) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0x11U))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[9U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [9U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0x11U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                           >> 0x12U)) 
                            & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x13U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x11U)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x12U))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x13U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[9U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [9U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x11U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0x12U)) 
                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x13U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x12U)) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0x13U))) 
                           << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xaU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xaU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x13U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x14U)) 
                              & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x15U))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x13U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x14U))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xaU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xaU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x13U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x14U)) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x15U)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x14U)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x15U))) 
                             << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xbU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xbU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x15U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x16U)) 
                              & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x17U))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x15U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x16U))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x17U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xbU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xbU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x15U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x16U)) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x17U)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x16U)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x17U))) 
                             << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xcU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xcU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x17U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x18U)) 
                              & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x19U))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x17U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x18U))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xcU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xcU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x17U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x18U)) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x19U)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x18U)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x19U))) 
                             << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xdU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xdU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x19U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1aU)) 
                              & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1bU))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x19U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1aU))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xdU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xdU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x19U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1aU)) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1bU)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1aU)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1bU))) 
                             << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xeU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xeU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x1bU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1cU)) 
                              & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1dU))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1bU)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1cU))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xeU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xeU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1bU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1cU)) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1dU)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1cU)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1dU))) 
                             << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xfU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xfU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x1dU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1eU)) 
                              & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1fU))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1dU)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1eU))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1fU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xfU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xfU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1dU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1eU)) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1fU)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1eU)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1fU))) 
                             << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x10U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x10U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 0x1fU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 1U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x1fU)) 
                                                  & (~ 
                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U])) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x10U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x10U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                     >> 0x1fU)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 1U)) + ((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 1U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x11U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x11U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 1U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 2U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 3U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 1U)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 2U))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x11U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x11U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 1U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 2U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 3U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 2U)) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 3U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x12U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x12U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 3U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 4U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 5U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 3U)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 4U))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 5U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x12U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x12U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 3U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 4U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 5U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 4U)) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 5U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x13U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x13U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 5U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 6U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 7U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 5U)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 6U))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 7U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x13U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x13U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 6U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 7U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 6U)) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 7U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x14U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x14U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 7U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 8U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 9U))) + (((~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 7U)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 8U))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x14U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x14U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 7U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 8U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 9U)) + ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 8U)) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 9U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x15U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x15U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 9U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 0xaU)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xbU))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xaU))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xbU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x15U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x15U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 9U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 0xaU)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xbU)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xaU)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xbU))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x16U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x16U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xbU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0xcU)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xdU))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xbU)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xcU))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xdU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x16U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x16U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xbU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xcU)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xdU)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xcU)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xdU))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x17U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x17U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xdU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0xeU)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xfU))) + (
                                                   ((~ 
                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xdU)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xeU))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x17U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x17U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xdU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xeU)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xfU)) + ((~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xeU)) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xfU))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x18U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x18U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xfU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0x10U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x11U))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0xfU)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0x10U))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x11U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x18U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x18U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xfU)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0x10U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x11U)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x10U)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x11U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x19U] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x19U]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x11U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x12U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x13U))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x11U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x13U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x19U] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x19U]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x11U)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x13U)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x13U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1aU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1aU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x13U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x14U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x15U))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x13U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1aU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1aU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x13U)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x15U)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x15U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1bU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1bU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x15U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x16U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x17U))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x17U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1bU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1bU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x15U)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x17U)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x17U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1cU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1cU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x17U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x18U)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x19U))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1cU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1cU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x17U)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x19U)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x19U))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1dU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1dU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x19U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1bU))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x19U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1dU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1dU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x19U)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1bU)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1bU))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1eU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1eU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x1bU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1dU))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x1bU)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1eU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1eU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1bU)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1dU)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1dU))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1fU] 
        = ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1fU]) | (1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x1dU) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1fU))) + 
                              (((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x1dU)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU))) 
                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1fU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1fU] 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1fU]) | (2U & (((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1dU)) & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU)) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1fU)) + ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU)) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1fU))) 
                              << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__br_bus[0U] 
        = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__br_bus[1U] 
        = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr 
                   >> 0x20U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__br_bus[2U] 
        = (1U & (((((((IData)((0U != (0xc0U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op)))) 
                      | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                          >> 5U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2))) 
                     | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                         >> 4U) & (~ (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2)))) 
                    | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                        >> 3U) & (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                   ? 1U : 0U))) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                    >> 2U) 
                                                   & (VL_GTES_IQQ(1,64,64, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                       ? 1U
                                                       : 0U))) 
                  | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                      >> 1U) & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
                                 < vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                 ? 1U : 0U))) | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                 & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                     >= vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WI(65,32, __Vtemp38448, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b));
    VL_EXTEND_WQ(65,64, __Vtemp38449, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp38448[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp38448[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp38448[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp38449[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp38449[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp38449[2U];
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0U])) {
            __Vtemp38453[0U] = 1U;
            __Vtemp38453[1U] = 0U;
            __Vtemp38453[2U] = 0U;
            __Vtemp38454[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38454[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38454[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38455, __Vtemp38453, __Vtemp38454);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][0U] 
                = __Vtemp38455[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][1U] 
                = __Vtemp38455[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][2U] 
                = (1U & __Vtemp38455[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0U][0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0U][1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
                = (((IData)((- (QData)((IData)((1U 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [(0x1fU 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U]))))) 
                    << 1U) | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0U][2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
                = (((IData)((- (QData)((IData)((1U 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [(0x1fU 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U]))))) 
                    >> 0x1fU) | ((IData)(((- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U])))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
                = ((IData)(((- (QData)((IData)((1U 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [(0x1fU 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U])))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            __Vtemp38461[0U] = 1U;
            __Vtemp38461[1U] = 0U;
            __Vtemp38461[2U] = 0U;
            __Vtemp38462[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38462[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38462[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38463, __Vtemp38461, __Vtemp38462);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][0U] 
                = (__Vtemp38463[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][1U] 
                = ((__Vtemp38463[0U] >> 0x1fU) | (__Vtemp38463[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][2U] 
                = ((__Vtemp38463[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38463[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0U][0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0U][1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
                = (((IData)((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [
                                                      (0x1fU 
                                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U] 
                                                      >> 1U))))))) 
                    << 2U) | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0U][2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
                = (((IData)((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [
                                                      (0x1fU 
                                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U] 
                                                      >> 1U))))))) 
                    >> 0x1eU) | ((IData)(((0x7fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [
                                                                    (0x1fU 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
                = ((IData)(((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [
                                                      (0x1fU 
                                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__gv_j)][2U] 
                                                      >> 1U)))))) 
                            >> 0x20U)) >> 0x1eU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
            = (((IData)((- (QData)((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU))))) 
                << 1U) | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
            = (((IData)((- (QData)((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU))))) 
                >> 0x1fU) | ((IData)(((- (QData)((IData)(
                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU)))) 
                                      >> 0x20U)) << 1U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
            = ((IData)(((- (QData)((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU)))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] = 0U;
    }
    if ((0U == vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x20U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][2U] 
            = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]
                : 0U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][3U] 
            = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]
                : 0U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][4U] 
            = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]
                : 0U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][3U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][4U] = 0U;
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [1U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [1U])) {
            __Vtemp38481[0U] = 1U;
            __Vtemp38481[1U] = 0U;
            __Vtemp38481[2U] = 0U;
            __Vtemp38482[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38482[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38482[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38483, __Vtemp38481, __Vtemp38482);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] 
                = (__Vtemp38483[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] 
                = ((__Vtemp38483[0U] >> 0x1fU) | (__Vtemp38483[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] 
                = ((__Vtemp38483[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38483[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [1U][0U] << 2U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [1U][0U] >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [1U][1U] 
                                          << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U))))))) 
                    << 4U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [1U][1U] >> 0x1eU) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [1U][2U] << 2U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U))))))) 
                    >> 0x1cU) | ((IData)(((0x1fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [1U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U)))))) 
                            >> 0x20U)) >> 0x1cU);
        } else {
            __Vtemp38492[0U] = 1U;
            __Vtemp38492[1U] = 0U;
            __Vtemp38492[2U] = 0U;
            __Vtemp38493[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38493[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38493[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38494, __Vtemp38492, __Vtemp38493);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] 
                = __Vtemp38494[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] 
                = __Vtemp38494[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] 
                = (1U & __Vtemp38494[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [1U][0U] << 2U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [1U][0U] >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [1U][1U] 
                                          << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U])))))) 
                    << 3U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [1U][1U] >> 0x1eU) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [1U][2U] << 2U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U])))))) 
                    >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [1U][2U]))))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U]))))) 
                            >> 0x20U)) >> 0x1dU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [1U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38504, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
            = (__Vtemp38504[0U] << 2U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
            = ((__Vtemp38504[0U] >> 0x1eU) | (__Vtemp38504[1U] 
                                              << 2U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                << 3U) | ((__Vtemp38504[1U] >> 0x1eU) 
                          | (4U & (__Vtemp38504[2U] 
                                   << 2U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
            = ((IData)(((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU))))) 
                        >> 0x20U)) >> 0x1dU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
        if ((IData)((0U == (6U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 2U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 3U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 2U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x1dU);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [2U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [2U])) {
            __Vtemp38516[0U] = 1U;
            __Vtemp38516[1U] = 0U;
            __Vtemp38516[2U] = 0U;
            __Vtemp38517[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38517[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38517[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38518, __Vtemp38516, __Vtemp38517);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] 
                = (__Vtemp38518[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] 
                = ((__Vtemp38518[0U] >> 0x1fU) | (__Vtemp38518[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] 
                = ((__Vtemp38518[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38518[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [2U][0U] << 4U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [2U][0U] >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [2U][1U] 
                                          << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U))))))) 
                    << 6U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [2U][1U] >> 0x1cU) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [2U][2U] << 4U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U))))))) 
                    >> 0x1aU) | ((IData)(((0x7ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [2U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x1aU);
        } else {
            __Vtemp38527[0U] = 1U;
            __Vtemp38527[1U] = 0U;
            __Vtemp38527[2U] = 0U;
            __Vtemp38528[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38528[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38528[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38529, __Vtemp38527, __Vtemp38528);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] 
                = __Vtemp38529[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] 
                = __Vtemp38529[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] 
                = (1U & __Vtemp38529[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [2U][0U] << 4U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [2U][0U] >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [2U][1U] 
                                          << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U])))))) 
                    << 5U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [2U][1U] >> 0x1cU) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [2U][2U] << 4U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U])))))) 
                    >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [2U][2U]))))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U]))))) 
                            >> 0x20U)) >> 0x1bU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [2U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38539, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
            = (__Vtemp38539[0U] << 4U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
            = ((__Vtemp38539[0U] >> 0x1cU) | (__Vtemp38539[1U] 
                                              << 4U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 5U) | ((__Vtemp38539[1U] >> 0x1cU) 
                          | (0x10U & (__Vtemp38539[2U] 
                                      << 4U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 5U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
            = ((IData)(((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU))))) 
                        >> 0x20U)) >> 0x1bU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
        if ((IData)((0U == (0xcU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 4U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 5U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 4U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x1bU);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [3U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [3U])) {
            __Vtemp38551[0U] = 1U;
            __Vtemp38551[1U] = 0U;
            __Vtemp38551[2U] = 0U;
            __Vtemp38552[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38552[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38552[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38553, __Vtemp38551, __Vtemp38552);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] 
                = (__Vtemp38553[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] 
                = ((__Vtemp38553[0U] >> 0x1fU) | (__Vtemp38553[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] 
                = ((__Vtemp38553[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38553[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [3U][0U] << 6U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [3U][0U] >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [3U][1U] 
                                          << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U))))))) 
                    << 8U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [3U][1U] >> 0x1aU) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [3U][2U] << 6U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U))))))) 
                    >> 0x18U) | ((IData)(((0x1ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [3U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x18U);
        } else {
            __Vtemp38562[0U] = 1U;
            __Vtemp38562[1U] = 0U;
            __Vtemp38562[2U] = 0U;
            __Vtemp38563[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38563[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38563[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38564, __Vtemp38562, __Vtemp38563);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] 
                = __Vtemp38564[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] 
                = __Vtemp38564[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] 
                = (1U & __Vtemp38564[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [3U][0U] << 6U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [3U][0U] >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [3U][1U] 
                                          << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U])))))) 
                    << 7U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [3U][1U] >> 0x1aU) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [3U][2U] << 6U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U])))))) 
                    >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [3U][2U]))))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U]))))) 
                            >> 0x20U)) >> 0x19U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [3U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38574, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
            = (__Vtemp38574[0U] << 6U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
            = ((__Vtemp38574[0U] >> 0x1aU) | (__Vtemp38574[1U] 
                                              << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 7U) | ((__Vtemp38574[1U] >> 0x1aU) 
                          | (0x40U & (__Vtemp38574[2U] 
                                      << 6U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 7U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
            = ((IData)(((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU))))) 
                        >> 0x20U)) >> 0x19U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
        if ((IData)((0U == (0x18U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 6U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 7U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 6U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x19U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [4U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [4U])) {
            __Vtemp38586[0U] = 1U;
            __Vtemp38586[1U] = 0U;
            __Vtemp38586[2U] = 0U;
            __Vtemp38587[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38587[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38587[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38588, __Vtemp38586, __Vtemp38587);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] 
                = (__Vtemp38588[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] 
                = ((__Vtemp38588[0U] >> 0x1fU) | (__Vtemp38588[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] 
                = ((__Vtemp38588[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38588[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [4U][0U] << 8U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [4U][0U] >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [4U][1U] 
                                          << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U))))))) 
                    << 0xaU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [4U][1U] >> 0x18U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [4U][2U] << 8U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U))))))) 
                    >> 0x16U) | ((IData)(((0x7fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [4U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x16U);
        } else {
            __Vtemp38597[0U] = 1U;
            __Vtemp38597[1U] = 0U;
            __Vtemp38597[2U] = 0U;
            __Vtemp38598[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38598[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38598[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38599, __Vtemp38597, __Vtemp38598);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] 
                = __Vtemp38599[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] 
                = __Vtemp38599[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] 
                = (1U & __Vtemp38599[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [4U][0U] << 8U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [4U][0U] >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [4U][1U] 
                                          << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U])))))) 
                    << 9U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [4U][1U] >> 0x18U) | 
                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [4U][2U] << 8U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U])))))) 
                    >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [4U][2U]))))) 
                                          >> 0x20U)) 
                                 << 9U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U]))))) 
                            >> 0x20U)) >> 0x17U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [4U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38609, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
            = (__Vtemp38609[0U] << 8U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
            = ((__Vtemp38609[0U] >> 0x18U) | (__Vtemp38609[1U] 
                                              << 8U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 9U) | ((__Vtemp38609[1U] >> 0x18U) 
                          | (0x100U & (__Vtemp38609[2U] 
                                       << 8U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 9U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
            = ((IData)(((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU))))) 
                        >> 0x20U)) >> 0x17U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
        if ((IData)((0U == (0x30U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 8U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 9U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 8U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 9U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x17U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [5U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [5U])) {
            __Vtemp38621[0U] = 1U;
            __Vtemp38621[1U] = 0U;
            __Vtemp38621[2U] = 0U;
            __Vtemp38622[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38622[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38622[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38623, __Vtemp38621, __Vtemp38622);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] 
                = (__Vtemp38623[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] 
                = ((__Vtemp38623[0U] >> 0x1fU) | (__Vtemp38623[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] 
                = ((__Vtemp38623[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38623[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [5U][0U] << 0xaU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [5U][0U] >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [5U][1U] 
                                          << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U))))))) 
                    << 0xcU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [5U][2U] << 0xaU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U))))))) 
                    >> 0x14U) | ((IData)(((0x1fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [5U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x14U);
        } else {
            __Vtemp38632[0U] = 1U;
            __Vtemp38632[1U] = 0U;
            __Vtemp38632[2U] = 0U;
            __Vtemp38633[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38633[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38633[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38634, __Vtemp38632, __Vtemp38633);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] 
                = __Vtemp38634[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] 
                = __Vtemp38634[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] 
                = (1U & __Vtemp38634[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [5U][0U] << 0xaU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [5U][0U] >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [5U][1U] 
                                          << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U])))))) 
                    << 0xbU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [5U][2U] << 0xaU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U])))))) 
                    >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [5U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U]))))) 
                            >> 0x20U)) >> 0x15U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [5U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38644, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
            = (__Vtemp38644[0U] << 0xaU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
            = ((__Vtemp38644[0U] >> 0x16U) | (__Vtemp38644[1U] 
                                              << 0xaU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 0xbU) | ((__Vtemp38644[1U] >> 0x16U) 
                            | (0x400U & (__Vtemp38644[2U] 
                                         << 0xaU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
            = ((IData)(((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU))))) 
                        >> 0x20U)) >> 0x15U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
        if ((IData)((0U == (0x60U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xaU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xbU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xaU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x15U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [6U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [6U])) {
            __Vtemp38656[0U] = 1U;
            __Vtemp38656[1U] = 0U;
            __Vtemp38656[2U] = 0U;
            __Vtemp38657[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38657[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38657[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38658, __Vtemp38656, __Vtemp38657);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] 
                = (__Vtemp38658[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] 
                = ((__Vtemp38658[0U] >> 0x1fU) | (__Vtemp38658[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] 
                = ((__Vtemp38658[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38658[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [6U][0U] << 0xcU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [6U][0U] >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [6U][1U] 
                                          << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U))))))) 
                    << 0xeU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [6U][2U] << 0xcU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U))))))) 
                    >> 0x12U) | ((IData)(((0x7ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [6U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U)))))) 
                            >> 0x20U)) >> 0x12U);
        } else {
            __Vtemp38667[0U] = 1U;
            __Vtemp38667[1U] = 0U;
            __Vtemp38667[2U] = 0U;
            __Vtemp38668[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38668[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38668[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38669, __Vtemp38667, __Vtemp38668);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] 
                = __Vtemp38669[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] 
                = __Vtemp38669[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] 
                = (1U & __Vtemp38669[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [6U][0U] << 0xcU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [6U][0U] >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [6U][1U] 
                                          << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U])))))) 
                    << 0xdU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [6U][2U] << 0xcU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U])))))) 
                    >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [6U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xdU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U]))))) 
                            >> 0x20U)) >> 0x13U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [6U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38679, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
            = (__Vtemp38679[0U] << 0xcU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
            = ((__Vtemp38679[0U] >> 0x14U) | (__Vtemp38679[1U] 
                                              << 0xcU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xdU) | ((__Vtemp38679[1U] >> 0x14U) 
                            | (0x1000U & (__Vtemp38679[2U] 
                                          << 0xcU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xdU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
            = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU))))) 
                        >> 0x20U)) >> 0x13U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
        if ((IData)((0U == (0xc0U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xcU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xdU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xcU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xdU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x13U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [7U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [7U])) {
            __Vtemp38691[0U] = 1U;
            __Vtemp38691[1U] = 0U;
            __Vtemp38691[2U] = 0U;
            __Vtemp38692[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38692[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38692[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38693, __Vtemp38691, __Vtemp38692);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] 
                = (__Vtemp38693[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] 
                = ((__Vtemp38693[0U] >> 0x1fU) | (__Vtemp38693[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] 
                = ((__Vtemp38693[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38693[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [7U][0U] << 0xeU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [7U][0U] >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [7U][1U] 
                                          << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U))))))) 
                    << 0x10U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [7U][1U] >> 0x12U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [7U][2U] << 0xeU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U))))))) 
                    >> 0x10U) | ((IData)(((0x1ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [7U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U)))))) 
                            >> 0x20U)) >> 0x10U);
        } else {
            __Vtemp38702[0U] = 1U;
            __Vtemp38702[1U] = 0U;
            __Vtemp38702[2U] = 0U;
            __Vtemp38703[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38703[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38703[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38704, __Vtemp38702, __Vtemp38703);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] 
                = __Vtemp38704[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] 
                = __Vtemp38704[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] 
                = (1U & __Vtemp38704[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [7U][0U] << 0xeU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [7U][0U] >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [7U][1U] 
                                          << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U])))))) 
                    << 0xfU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [7U][1U] >> 0x12U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [7U][2U] << 0xeU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U])))))) 
                    >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [7U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U]))))) 
                            >> 0x20U)) >> 0x11U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [7U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38714, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
            = (__Vtemp38714[0U] << 0xeU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
            = ((__Vtemp38714[0U] >> 0x12U) | (__Vtemp38714[1U] 
                                              << 0xeU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xfU) | ((__Vtemp38714[1U] >> 0x12U) 
                            | (0x4000U & (__Vtemp38714[2U] 
                                          << 0xeU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
            = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU))))) 
                        >> 0x20U)) >> 0x11U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
        if ((IData)((0U == (0x180U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xeU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xfU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xeU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x11U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [8U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [8U])) {
            __Vtemp38726[0U] = 1U;
            __Vtemp38726[1U] = 0U;
            __Vtemp38726[2U] = 0U;
            __Vtemp38727[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38727[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38727[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38728, __Vtemp38726, __Vtemp38727);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] 
                = (__Vtemp38728[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] 
                = ((__Vtemp38728[0U] >> 0x1fU) | (__Vtemp38728[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] 
                = ((__Vtemp38728[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38728[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [8U][0U] << 0x10U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [8U][0U] >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [8U][1U] 
                                          << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U))))))) 
                    << 0x12U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [8U][1U] >> 0x10U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [8U][2U] << 0x10U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U))))))) 
                    >> 0xeU) | ((IData)(((0x7fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [8U][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U)))))) 
                            >> 0x20U)) >> 0xeU);
        } else {
            __Vtemp38737[0U] = 1U;
            __Vtemp38737[1U] = 0U;
            __Vtemp38737[2U] = 0U;
            __Vtemp38738[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38738[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38738[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38739, __Vtemp38737, __Vtemp38738);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] 
                = __Vtemp38739[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] 
                = __Vtemp38739[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] 
                = (1U & __Vtemp38739[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [8U][0U] << 0x10U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [8U][0U] >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [8U][1U] 
                                          << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U])))))) 
                    << 0x11U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [8U][1U] >> 0x10U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [8U][2U] << 0x10U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U])))))) 
                    >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [8U][2U]))))) 
                                         >> 0x20U)) 
                                << 0x11U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U]))))) 
                            >> 0x20U)) >> 0xfU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38749, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
            = (__Vtemp38749[0U] << 0x10U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
            = ((__Vtemp38749[0U] >> 0x10U) | (__Vtemp38749[1U] 
                                              << 0x10U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x11U) | ((__Vtemp38749[1U] >> 0x10U) 
                             | (0x10000U & (__Vtemp38749[2U] 
                                            << 0x10U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x11U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
            = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU))))) 
                        >> 0x20U)) >> 0xfU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
        if ((IData)((0U == (0x300U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x10U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x11U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                               << 0x10U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x11U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xfU);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [9U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [9U])) {
            __Vtemp38761[0U] = 1U;
            __Vtemp38761[1U] = 0U;
            __Vtemp38761[2U] = 0U;
            __Vtemp38762[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38762[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38762[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38763, __Vtemp38761, __Vtemp38762);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] 
                = (__Vtemp38763[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] 
                = ((__Vtemp38763[0U] >> 0x1fU) | (__Vtemp38763[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] 
                = ((__Vtemp38763[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38763[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [9U][0U] << 0x12U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [9U][0U] >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [9U][1U] << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U))))))) 
                    << 0x14U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [9U][1U] >> 0xeU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [9U][2U] << 0x12U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U))))))) 
                    >> 0xcU) | ((IData)(((0x1fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [9U][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U)))))) 
                            >> 0x20U)) >> 0xcU);
        } else {
            __Vtemp38772[0U] = 1U;
            __Vtemp38772[1U] = 0U;
            __Vtemp38772[2U] = 0U;
            __Vtemp38773[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38773[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38773[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38774, __Vtemp38772, __Vtemp38773);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] 
                = __Vtemp38774[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] 
                = __Vtemp38774[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] 
                = (1U & __Vtemp38774[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [9U][0U] << 0x12U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [9U][0U] >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [9U][1U] << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U])))))) 
                    << 0x13U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [9U][1U] >> 0xeU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [9U][2U] << 0x12U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U])))))) 
                    >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [9U][2U]))))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U]))))) 
                            >> 0x20U)) >> 0xdU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [9U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38784, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
            = (__Vtemp38784[0U] << 0x12U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
            = ((__Vtemp38784[0U] >> 0xeU) | (__Vtemp38784[1U] 
                                             << 0x12U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x13U) | ((__Vtemp38784[1U] >> 0xeU) 
                             | (0x40000U & (__Vtemp38784[2U] 
                                            << 0x12U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x13U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
            = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU))))) 
                        >> 0x20U)) >> 0xdU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
        if ((IData)((0U == (0x600U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x12U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x13U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x12U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xdU);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xaU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xaU])) {
            __Vtemp38796[0U] = 1U;
            __Vtemp38796[1U] = 0U;
            __Vtemp38796[2U] = 0U;
            __Vtemp38797[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38797[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38797[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38798, __Vtemp38796, __Vtemp38797);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] 
                = (__Vtemp38798[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] 
                = ((__Vtemp38798[0U] >> 0x1fU) | (__Vtemp38798[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] 
                = ((__Vtemp38798[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38798[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xaU][0U] << 0x14U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xaU][0U] >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0xaU][1U] 
                                           << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U))))))) 
                    << 0x16U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xaU][1U] >> 0xcU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xaU][2U] << 0x14U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U))))))) 
                    >> 0xaU) | ((IData)(((0x7ffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [0xaU][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U)))))) 
                            >> 0x20U)) >> 0xaU);
        } else {
            __Vtemp38807[0U] = 1U;
            __Vtemp38807[1U] = 0U;
            __Vtemp38807[2U] = 0U;
            __Vtemp38808[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38808[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38808[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38809, __Vtemp38807, __Vtemp38808);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] 
                = __Vtemp38809[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] 
                = __Vtemp38809[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] 
                = (1U & __Vtemp38809[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xaU][0U] << 0x14U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xaU][0U] >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                           [0xaU][1U] 
                                           << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U])))))) 
                    << 0x15U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xaU][1U] >> 0xcU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xaU][2U] << 0x14U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U])))))) 
                    >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [0xaU][2U]))))) 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U]))))) 
                            >> 0x20U)) >> 0xbU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xaU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38819, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
            = (__Vtemp38819[0U] << 0x14U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
            = ((__Vtemp38819[0U] >> 0xcU) | (__Vtemp38819[1U] 
                                             << 0x14U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x15U) | ((__Vtemp38819[1U] >> 0xcU) 
                             | (0x100000U & (__Vtemp38819[2U] 
                                             << 0x14U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
            = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU))))) 
                        >> 0x20U)) >> 0xbU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
        if ((IData)((0U == (0xc00U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x14U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x15U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x14U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xbU);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xbU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xbU])) {
            __Vtemp38831[0U] = 1U;
            __Vtemp38831[1U] = 0U;
            __Vtemp38831[2U] = 0U;
            __Vtemp38832[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38832[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38832[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38833, __Vtemp38831, __Vtemp38832);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] 
                = (__Vtemp38833[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] 
                = ((__Vtemp38833[0U] >> 0x1fU) | (__Vtemp38833[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] 
                = ((__Vtemp38833[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38833[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xbU][0U] << 0x16U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xbU][0U] >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0xbU][1U] 
                                           << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U))))))) 
                    << 0x18U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xbU][1U] >> 0xaU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xbU][2U] << 0x16U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U))))))) 
                    >> 8U) | ((IData)(((0x1ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xbU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U)))))) 
                            >> 0x20U)) >> 8U);
        } else {
            __Vtemp38842[0U] = 1U;
            __Vtemp38842[1U] = 0U;
            __Vtemp38842[2U] = 0U;
            __Vtemp38843[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38843[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38843[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38844, __Vtemp38842, __Vtemp38843);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] 
                = __Vtemp38844[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] 
                = __Vtemp38844[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] 
                = (1U & __Vtemp38844[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xbU][0U] << 0x16U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xbU][0U] >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                           [0xbU][1U] 
                                           << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U])))))) 
                    << 0x17U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xbU][1U] >> 0xaU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xbU][2U] << 0x16U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U])))))) 
                    >> 9U) | ((IData)(((0x3ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xbU][2U]))))) 
                                       >> 0x20U)) << 0x17U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U]))))) 
                            >> 0x20U)) >> 9U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xbU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38854, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
            = (__Vtemp38854[0U] << 0x16U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
            = ((__Vtemp38854[0U] >> 0xaU) | (__Vtemp38854[1U] 
                                             << 0x16U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x17U) | ((__Vtemp38854[1U] >> 0xaU) 
                             | (0x400000U & (__Vtemp38854[2U] 
                                             << 0x16U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                >> 9U) | ((IData)(((0x3ffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x17U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
            = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU))))) 
                        >> 0x20U)) >> 9U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
        if ((IData)((0U == (0x1800U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x16U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x17U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x16U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 9U) | ((IData)(((0x3ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x17U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 9U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xcU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xcU])) {
            __Vtemp38866[0U] = 1U;
            __Vtemp38866[1U] = 0U;
            __Vtemp38866[2U] = 0U;
            __Vtemp38867[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38867[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38867[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38868, __Vtemp38866, __Vtemp38867);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] 
                = (__Vtemp38868[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] 
                = ((__Vtemp38868[0U] >> 0x1fU) | (__Vtemp38868[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] 
                = ((__Vtemp38868[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38868[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xcU][0U] << 0x18U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xcU][0U] >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xcU][1U] 
                                         << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U))))))) 
                    << 0x1aU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xcU][1U] >> 8U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xcU][2U] << 0x18U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U))))))) 
                    >> 6U) | ((IData)(((0x7fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xcU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U)))))) 
                            >> 0x20U)) >> 6U);
        } else {
            __Vtemp38877[0U] = 1U;
            __Vtemp38877[1U] = 0U;
            __Vtemp38877[2U] = 0U;
            __Vtemp38878[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38878[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38878[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38879, __Vtemp38877, __Vtemp38878);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] 
                = __Vtemp38879[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] 
                = __Vtemp38879[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] 
                = (1U & __Vtemp38879[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xcU][0U] << 0x18U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xcU][0U] >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xcU][1U] 
                                         << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U])))))) 
                    << 0x19U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xcU][1U] >> 8U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xcU][2U] << 0x18U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U])))))) 
                    >> 7U) | ((IData)(((0xffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xcU][2U]))))) 
                                       >> 0x20U)) << 0x19U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U]))))) 
                            >> 0x20U)) >> 7U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xcU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38889, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
            = (__Vtemp38889[0U] << 0x18U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
            = ((__Vtemp38889[0U] >> 8U) | (__Vtemp38889[1U] 
                                           << 0x18U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x19U) | ((__Vtemp38889[1U] >> 8U) 
                             | (0x1000000U & (__Vtemp38889[2U] 
                                              << 0x18U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                >> 7U) | ((IData)(((0xffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x19U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
            = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU))))) 
                        >> 0x20U)) >> 7U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
        if ((IData)((0U == (0x3000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x18U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x19U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x18U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 7U) | ((IData)(((0xffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x19U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 7U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xdU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xdU])) {
            __Vtemp38901[0U] = 1U;
            __Vtemp38901[1U] = 0U;
            __Vtemp38901[2U] = 0U;
            __Vtemp38902[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38902[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38902[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38903, __Vtemp38901, __Vtemp38902);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] 
                = (__Vtemp38903[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] 
                = ((__Vtemp38903[0U] >> 0x1fU) | (__Vtemp38903[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] 
                = ((__Vtemp38903[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38903[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xdU][0U] << 0x1aU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xdU][0U] >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xdU][1U] 
                                         << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U))))))) 
                    << 0x1cU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xdU][1U] >> 6U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xdU][2U] << 0x1aU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U))))))) 
                    >> 4U) | ((IData)(((0x1fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xdU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U)))))) 
                            >> 0x20U)) >> 4U);
        } else {
            __Vtemp38912[0U] = 1U;
            __Vtemp38912[1U] = 0U;
            __Vtemp38912[2U] = 0U;
            __Vtemp38913[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38913[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38913[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38914, __Vtemp38912, __Vtemp38913);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] 
                = __Vtemp38914[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] 
                = __Vtemp38914[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] 
                = (1U & __Vtemp38914[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xdU][0U] << 0x1aU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xdU][0U] >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xdU][1U] 
                                         << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U])))))) 
                    << 0x1bU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xdU][1U] >> 6U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xdU][2U] << 0x1aU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U])))))) 
                    >> 5U) | ((IData)(((0x3fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xdU][2U]))))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U]))))) 
                            >> 0x20U)) >> 5U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xdU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38924, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
            = (__Vtemp38924[0U] << 0x1aU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
            = ((__Vtemp38924[0U] >> 6U) | (__Vtemp38924[1U] 
                                           << 0x1aU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x1bU) | ((__Vtemp38924[1U] >> 6U) 
                             | (0x4000000U & (__Vtemp38924[2U] 
                                              << 0x1aU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                >> 5U) | ((IData)(((0x3fffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1bU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
            = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU))))) 
                        >> 0x20U)) >> 5U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
        if ((IData)((0U == (0x6000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1aU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1bU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1aU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 5U) | ((IData)(((0x3fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 5U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xeU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xeU])) {
            __Vtemp38936[0U] = 1U;
            __Vtemp38936[1U] = 0U;
            __Vtemp38936[2U] = 0U;
            __Vtemp38937[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38937[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38937[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38938, __Vtemp38936, __Vtemp38937);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] 
                = (__Vtemp38938[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] 
                = ((__Vtemp38938[0U] >> 0x1fU) | (__Vtemp38938[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] 
                = ((__Vtemp38938[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38938[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xeU][0U] << 0x1cU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xeU][0U] >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xeU][1U] 
                                         << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U))))))) 
                    << 0x1eU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xeU][1U] >> 4U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xeU][2U] << 0x1cU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U))))))) 
                    >> 2U) | ((IData)(((0x7ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xeU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U)))))) 
                            >> 0x20U)) >> 2U);
        } else {
            __Vtemp38947[0U] = 1U;
            __Vtemp38947[1U] = 0U;
            __Vtemp38947[2U] = 0U;
            __Vtemp38948[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38948[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38948[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38949, __Vtemp38947, __Vtemp38948);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] 
                = __Vtemp38949[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] 
                = __Vtemp38949[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] 
                = (1U & __Vtemp38949[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xeU][0U] << 0x1cU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xeU][0U] >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xeU][1U] 
                                         << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U])))))) 
                    << 0x1dU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xeU][1U] >> 4U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xeU][2U] << 0x1cU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U])))))) 
                    >> 3U) | ((IData)(((0xfffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xeU][2U]))))) 
                                       >> 0x20U)) << 0x1dU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U]))))) 
                            >> 0x20U)) >> 3U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xeU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38959, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
            = (__Vtemp38959[0U] << 0x1cU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
            = ((__Vtemp38959[0U] >> 4U) | (__Vtemp38959[1U] 
                                           << 0x1cU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1dU) | ((__Vtemp38959[1U] >> 4U) 
                             | (0x10000000U & (__Vtemp38959[2U] 
                                               << 0x1cU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                >> 3U) | ((IData)(((0xfffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1dU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
            = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU))))) 
                        >> 0x20U)) >> 3U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
        if ((IData)((0U == (0xc000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1cU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1dU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1cU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 3U) | ((IData)(((0xfffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1dU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 3U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xfU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xfU])) {
            __Vtemp38971[0U] = 1U;
            __Vtemp38971[1U] = 0U;
            __Vtemp38971[2U] = 0U;
            __Vtemp38972[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38972[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38972[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38973, __Vtemp38971, __Vtemp38972);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] 
                = (__Vtemp38973[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] 
                = ((__Vtemp38973[0U] >> 0x1fU) | (__Vtemp38973[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] 
                = ((__Vtemp38973[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38973[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xfU][0U] << 0x1eU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xfU][0U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xfU][1U] 
                                         << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xfU][1U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xfU][2U] 
                                         << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [0xfU][2U] 
                                                                   >> 1U)))))));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [0xfU][2U] 
                                                                    >> 1U)))))) 
                           >> 0x20U));
        } else {
            __Vtemp38982[0U] = 1U;
            __Vtemp38982[1U] = 0U;
            __Vtemp38982[2U] = 0U;
            __Vtemp38983[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38983[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38983[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38984, __Vtemp38982, __Vtemp38983);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] 
                = __Vtemp38984[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] 
                = __Vtemp38984[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] 
                = (1U & __Vtemp38984[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xfU][0U] << 0x1eU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xfU][0U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xfU][1U] 
                                         << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U])))))) 
                    << 0x1fU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xfU][1U] >> 2U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xfU][2U] << 0x1eU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U])))))) 
                    >> 1U) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xfU][2U]))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U]))))) 
                            >> 0x20U)) >> 1U);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xfU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp38994, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
            = (__Vtemp38994[0U] << 0x1eU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
            = ((__Vtemp38994[0U] >> 2U) | (__Vtemp38994[1U] 
                                           << 0x1eU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1fU) | ((__Vtemp38994[1U] >> 2U) 
                             | (0x40000000U & (__Vtemp38994[2U] 
                                               << 0x1eU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                >> 1U) | ((IData)(((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1fU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
            = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU))))) 
                        >> 0x20U)) >> 1U);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
        if ((IData)((0U == (0x18000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1eU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1fU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1eU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 1U) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 1U);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x10U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x10U])) {
            __Vtemp39006[0U] = 1U;
            __Vtemp39006[1U] = 0U;
            __Vtemp39006[2U] = 0U;
            __Vtemp39007[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39007[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39007[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39008, __Vtemp39006, __Vtemp39007);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] 
                = (__Vtemp39008[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] 
                = ((__Vtemp39008[0U] >> 0x1fU) | (__Vtemp39008[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] 
                = ((__Vtemp39008[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39008[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0x10U][0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0x10U][1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x10U][2U] >> 1U)))) 
                    << 2U) | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x10U][2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x10U][2U] 
                                           >> 1U)))) 
                         >> 0x1eU));
        } else {
            __Vtemp39017[0U] = 1U;
            __Vtemp39017[1U] = 0U;
            __Vtemp39017[2U] = 0U;
            __Vtemp39018[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39018[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39018[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39019, __Vtemp39017, __Vtemp39018);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] 
                = __Vtemp39019[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] 
                = __Vtemp39019[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] 
                = (1U & __Vtemp39019[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0x10U][0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0x10U][1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x10U][2U]))) << 1U) 
                   | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x10U][2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [0x10U][2U]))) >> 0x1fU);
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x10U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39029, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
            = __Vtemp39029[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
            = __Vtemp39029[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 1U) | (1U 
                                                  & __Vtemp39029[2U]));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
            = ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                           >> 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        if ((IData)((0U == (0x30000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 1U) | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                   >> 0x1fU);
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x11U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x11U])) {
            __Vtemp39041[0U] = 1U;
            __Vtemp39041[1U] = 0U;
            __Vtemp39041[2U] = 0U;
            __Vtemp39042[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39042[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39042[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39043, __Vtemp39041, __Vtemp39042);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] 
                = (__Vtemp39043[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] 
                = ((__Vtemp39043[0U] >> 0x1fU) | (__Vtemp39043[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] 
                = ((__Vtemp39043[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39043[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x11U][0U] << 2U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x11U][0U] >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x11U][1U] 
                                             << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x11U][2U] >> 1U)))) 
                    << 4U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x11U][1U] >> 0x1eU) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x11U][2U] << 2U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x11U][2U] 
                                           >> 1U)))) 
                         >> 0x1cU));
        } else {
            __Vtemp39052[0U] = 1U;
            __Vtemp39052[1U] = 0U;
            __Vtemp39052[2U] = 0U;
            __Vtemp39053[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39053[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39053[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39054, __Vtemp39052, __Vtemp39053);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] 
                = __Vtemp39054[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] 
                = __Vtemp39054[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] 
                = (1U & __Vtemp39054[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x11U][0U] << 2U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x11U][0U] >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x11U][1U] 
                                             << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x11U][2U]))) << 3U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x11U][1U] >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x11U][2U] 
                                                << 2U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x11U][2U]))) 
                         >> 0x1dU));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x11U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39064, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
            = (__Vtemp39064[0U] << 2U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
            = ((__Vtemp39064[0U] >> 0x1eU) | (__Vtemp39064[1U] 
                                              << 2U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 3U) | ((
                                                   __Vtemp39064[1U] 
                                                   >> 0x1eU) 
                                                  | (4U 
                                                     & (__Vtemp39064[2U] 
                                                        << 2U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x1dU));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        if ((IData)((0U == (0x60000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 2U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 2U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 3U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1eU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 2U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x1dU));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x12U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x12U])) {
            __Vtemp39076[0U] = 1U;
            __Vtemp39076[1U] = 0U;
            __Vtemp39076[2U] = 0U;
            __Vtemp39077[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39077[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39077[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39078, __Vtemp39076, __Vtemp39077);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] 
                = (__Vtemp39078[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] 
                = ((__Vtemp39078[0U] >> 0x1fU) | (__Vtemp39078[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] 
                = ((__Vtemp39078[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39078[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x12U][0U] << 4U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x12U][0U] >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x12U][1U] 
                                             << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x12U][2U] >> 1U)))) 
                    << 6U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x12U][1U] >> 0x1cU) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x12U][2U] << 4U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x12U][2U] 
                                           >> 1U)))) 
                         >> 0x1aU));
        } else {
            __Vtemp39087[0U] = 1U;
            __Vtemp39087[1U] = 0U;
            __Vtemp39087[2U] = 0U;
            __Vtemp39088[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39088[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39088[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39089, __Vtemp39087, __Vtemp39088);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] 
                = __Vtemp39089[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] 
                = __Vtemp39089[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] 
                = (1U & __Vtemp39089[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x12U][0U] << 4U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x12U][0U] >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x12U][1U] 
                                             << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x12U][2U]))) << 5U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x12U][1U] >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x12U][2U] 
                                                << 4U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x12U][2U]))) 
                         >> 0x1bU));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x12U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39099, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
            = (__Vtemp39099[0U] << 4U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
            = ((__Vtemp39099[0U] >> 0x1cU) | (__Vtemp39099[1U] 
                                              << 4U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 5U) | ((
                                                   __Vtemp39099[1U] 
                                                   >> 0x1cU) 
                                                  | (0x10U 
                                                     & (__Vtemp39099[2U] 
                                                        << 4U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x1bU));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        if ((IData)((0U == (0xc0000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 4U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 4U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 5U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1cU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 4U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x1bU));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x13U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x13U])) {
            __Vtemp39111[0U] = 1U;
            __Vtemp39111[1U] = 0U;
            __Vtemp39111[2U] = 0U;
            __Vtemp39112[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39112[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39112[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39113, __Vtemp39111, __Vtemp39112);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] 
                = (__Vtemp39113[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] 
                = ((__Vtemp39113[0U] >> 0x1fU) | (__Vtemp39113[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] 
                = ((__Vtemp39113[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39113[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x13U][0U] << 6U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x13U][0U] >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x13U][1U] 
                                             << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x13U][2U] >> 1U)))) 
                    << 8U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x13U][1U] >> 0x1aU) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x13U][2U] << 6U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x13U][2U] 
                                           >> 1U)))) 
                         >> 0x18U));
        } else {
            __Vtemp39122[0U] = 1U;
            __Vtemp39122[1U] = 0U;
            __Vtemp39122[2U] = 0U;
            __Vtemp39123[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39123[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39123[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39124, __Vtemp39122, __Vtemp39123);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] 
                = __Vtemp39124[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] 
                = __Vtemp39124[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] 
                = (1U & __Vtemp39124[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x13U][0U] << 6U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x13U][0U] >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x13U][1U] 
                                             << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x13U][2U]))) << 7U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x13U][1U] >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x13U][2U] 
                                                << 6U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x13U][2U]))) 
                         >> 0x19U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x13U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39134, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
            = (__Vtemp39134[0U] << 6U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
            = ((__Vtemp39134[0U] >> 0x1aU) | (__Vtemp39134[1U] 
                                              << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 7U) | ((
                                                   __Vtemp39134[1U] 
                                                   >> 0x1aU) 
                                                  | (0x40U 
                                                     & (__Vtemp39134[2U] 
                                                        << 6U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x19U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        if ((IData)((0U == (0x180000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 6U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 6U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 7U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 6U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x19U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x14U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x14U])) {
            __Vtemp39146[0U] = 1U;
            __Vtemp39146[1U] = 0U;
            __Vtemp39146[2U] = 0U;
            __Vtemp39147[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39147[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39147[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39148, __Vtemp39146, __Vtemp39147);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] 
                = (__Vtemp39148[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] 
                = ((__Vtemp39148[0U] >> 0x1fU) | (__Vtemp39148[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] 
                = ((__Vtemp39148[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39148[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x14U][0U] << 8U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x14U][0U] >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x14U][1U] 
                                             << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x14U][2U] >> 1U)))) 
                    << 0xaU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x14U][1U] >> 0x18U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x14U][2U] << 8U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x14U][2U] 
                                           >> 1U)))) 
                         >> 0x16U));
        } else {
            __Vtemp39157[0U] = 1U;
            __Vtemp39157[1U] = 0U;
            __Vtemp39157[2U] = 0U;
            __Vtemp39158[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39158[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39158[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39159, __Vtemp39157, __Vtemp39158);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] 
                = __Vtemp39159[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] 
                = __Vtemp39159[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] 
                = (1U & __Vtemp39159[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x14U][0U] << 8U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x14U][0U] >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x14U][1U] 
                                             << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x14U][2U]))) << 9U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x14U][1U] >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x14U][2U] 
                                                << 8U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x14U][2U]))) 
                         >> 0x17U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x14U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39169, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
            = (__Vtemp39169[0U] << 8U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
            = ((__Vtemp39169[0U] >> 0x18U) | (__Vtemp39169[1U] 
                                              << 8U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 9U) | ((
                                                   __Vtemp39169[1U] 
                                                   >> 0x18U) 
                                                  | (0x100U 
                                                     & (__Vtemp39169[2U] 
                                                        << 8U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x17U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        if ((IData)((0U == (0x300000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 8U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 8U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 9U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x18U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 8U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x17U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x15U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x15U])) {
            __Vtemp39181[0U] = 1U;
            __Vtemp39181[1U] = 0U;
            __Vtemp39181[2U] = 0U;
            __Vtemp39182[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39182[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39182[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39183, __Vtemp39181, __Vtemp39182);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] 
                = (__Vtemp39183[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] 
                = ((__Vtemp39183[0U] >> 0x1fU) | (__Vtemp39183[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] 
                = ((__Vtemp39183[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39183[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x15U][0U] << 0xaU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x15U][0U] >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x15U][1U] 
                                             << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x15U][2U] >> 1U)))) 
                    << 0xcU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x15U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x15U][2U] << 0xaU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x15U][2U] 
                                           >> 1U)))) 
                         >> 0x14U));
        } else {
            __Vtemp39192[0U] = 1U;
            __Vtemp39192[1U] = 0U;
            __Vtemp39192[2U] = 0U;
            __Vtemp39193[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39193[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39193[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39194, __Vtemp39192, __Vtemp39193);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] 
                = __Vtemp39194[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] 
                = __Vtemp39194[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] 
                = (1U & __Vtemp39194[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x15U][0U] << 0xaU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x15U][0U] >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x15U][1U] 
                                             << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x15U][2U]))) << 0xbU) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x15U][1U] >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x15U][2U] 
                                                << 0xaU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x15U][2U]))) 
                         >> 0x15U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x15U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39204, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
            = (__Vtemp39204[0U] << 0xaU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
            = ((__Vtemp39204[0U] >> 0x16U) | (__Vtemp39204[1U] 
                                              << 0xaU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xbU) | 
               ((__Vtemp39204[1U] >> 0x16U) | (0x400U 
                                               & (__Vtemp39204[2U] 
                                                  << 0xaU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x15U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        if ((IData)((0U == (0x600000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xaU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xaU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xbU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x16U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xaU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x15U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x16U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x16U])) {
            __Vtemp39216[0U] = 1U;
            __Vtemp39216[1U] = 0U;
            __Vtemp39216[2U] = 0U;
            __Vtemp39217[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39217[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39217[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39218, __Vtemp39216, __Vtemp39217);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] 
                = (__Vtemp39218[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] 
                = ((__Vtemp39218[0U] >> 0x1fU) | (__Vtemp39218[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] 
                = ((__Vtemp39218[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39218[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x16U][0U] << 0xcU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x16U][0U] >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x16U][1U] 
                                             << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x16U][2U] >> 1U)))) 
                    << 0xeU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x16U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x16U][2U] << 0xcU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x16U][2U] 
                                           >> 1U)))) 
                         >> 0x12U));
        } else {
            __Vtemp39227[0U] = 1U;
            __Vtemp39227[1U] = 0U;
            __Vtemp39227[2U] = 0U;
            __Vtemp39228[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39228[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39228[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39229, __Vtemp39227, __Vtemp39228);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] 
                = __Vtemp39229[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] 
                = __Vtemp39229[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] 
                = (1U & __Vtemp39229[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x16U][0U] << 0xcU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x16U][0U] >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x16U][1U] 
                                             << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x16U][2U]))) << 0xdU) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x16U][1U] >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x16U][2U] 
                                                << 0xcU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x16U][2U]))) 
                         >> 0x13U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x16U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39239, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
            = (__Vtemp39239[0U] << 0xcU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
            = ((__Vtemp39239[0U] >> 0x14U) | (__Vtemp39239[1U] 
                                              << 0xcU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xdU) | 
               ((__Vtemp39239[1U] >> 0x14U) | (0x1000U 
                                               & (__Vtemp39239[2U] 
                                                  << 0xcU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x13U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        if ((IData)((0U == (0xc00000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xcU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xcU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xdU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x14U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xcU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x13U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x17U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x17U])) {
            __Vtemp39251[0U] = 1U;
            __Vtemp39251[1U] = 0U;
            __Vtemp39251[2U] = 0U;
            __Vtemp39252[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39252[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39252[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39253, __Vtemp39251, __Vtemp39252);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] 
                = (__Vtemp39253[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] 
                = ((__Vtemp39253[0U] >> 0x1fU) | (__Vtemp39253[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] 
                = ((__Vtemp39253[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39253[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x17U][0U] << 0xeU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x17U][0U] >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x17U][1U] 
                                             << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x17U][2U] >> 1U)))) 
                    << 0x10U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x17U][1U] >> 0x12U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x17U][2U] << 0xeU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x17U][2U] 
                                           >> 1U)))) 
                         >> 0x10U));
        } else {
            __Vtemp39262[0U] = 1U;
            __Vtemp39262[1U] = 0U;
            __Vtemp39262[2U] = 0U;
            __Vtemp39263[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39263[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39263[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39264, __Vtemp39262, __Vtemp39263);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] 
                = __Vtemp39264[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] 
                = __Vtemp39264[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] 
                = (1U & __Vtemp39264[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x17U][0U] << 0xeU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x17U][0U] >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x17U][1U] 
                                             << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x17U][2U]))) << 0xfU) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x17U][1U] >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x17U][2U] 
                                                << 0xeU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x17U][2U]))) 
                         >> 0x11U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x17U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39274, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
            = (__Vtemp39274[0U] << 0xeU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
            = ((__Vtemp39274[0U] >> 0x12U) | (__Vtemp39274[1U] 
                                              << 0xeU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xfU) | 
               ((__Vtemp39274[1U] >> 0x12U) | (0x4000U 
                                               & (__Vtemp39274[2U] 
                                                  << 0xeU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x11U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        if ((IData)((0U == (0x1800000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xeU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xeU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xfU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x12U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xeU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x11U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x18U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x18U])) {
            __Vtemp39286[0U] = 1U;
            __Vtemp39286[1U] = 0U;
            __Vtemp39286[2U] = 0U;
            __Vtemp39287[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39287[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39287[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39288, __Vtemp39286, __Vtemp39287);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] 
                = (__Vtemp39288[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] 
                = ((__Vtemp39288[0U] >> 0x1fU) | (__Vtemp39288[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] 
                = ((__Vtemp39288[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39288[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x18U][0U] << 0x10U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x18U][0U] >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x18U][1U] 
                                             << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x18U][2U] >> 1U)))) 
                    << 0x12U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x18U][1U] >> 0x10U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x18U][2U] << 0x10U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x18U][2U] 
                                           >> 1U)))) 
                         >> 0xeU));
        } else {
            __Vtemp39297[0U] = 1U;
            __Vtemp39297[1U] = 0U;
            __Vtemp39297[2U] = 0U;
            __Vtemp39298[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39298[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39298[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39299, __Vtemp39297, __Vtemp39298);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] 
                = __Vtemp39299[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] 
                = __Vtemp39299[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] 
                = (1U & __Vtemp39299[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x18U][0U] << 0x10U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x18U][0U] >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x18U][1U] 
                                             << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x18U][2U]))) << 0x11U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x18U][1U] >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x18U][2U] 
                                                << 0x10U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x18U][2U]))) 
                         >> 0xfU));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x18U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39309, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
            = (__Vtemp39309[0U] << 0x10U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
            = ((__Vtemp39309[0U] >> 0x10U) | (__Vtemp39309[1U] 
                                              << 0x10U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x11U) | 
               ((__Vtemp39309[1U] >> 0x10U) | (0x10000U 
                                               & (__Vtemp39309[2U] 
                                                  << 0x10U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xfU));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        if ((IData)((0U == (0x3000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x10U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0x10U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x11U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0x10U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                               << 0x10U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xfU));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x19U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x19U])) {
            __Vtemp39321[0U] = 1U;
            __Vtemp39321[1U] = 0U;
            __Vtemp39321[2U] = 0U;
            __Vtemp39322[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39322[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39322[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39323, __Vtemp39321, __Vtemp39322);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] 
                = (__Vtemp39323[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] 
                = ((__Vtemp39323[0U] >> 0x1fU) | (__Vtemp39323[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] 
                = ((__Vtemp39323[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39323[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x19U][0U] << 0x12U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x19U][0U] >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x19U][1U] 
                                            << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x19U][2U] >> 1U)))) 
                    << 0x14U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x19U][1U] >> 0xeU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x19U][2U] << 0x12U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x19U][2U] 
                                           >> 1U)))) 
                         >> 0xcU));
        } else {
            __Vtemp39332[0U] = 1U;
            __Vtemp39332[1U] = 0U;
            __Vtemp39332[2U] = 0U;
            __Vtemp39333[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39333[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39333[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39334, __Vtemp39332, __Vtemp39333);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] 
                = __Vtemp39334[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] 
                = __Vtemp39334[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] 
                = (1U & __Vtemp39334[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x19U][0U] << 0x12U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x19U][0U] >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x19U][1U] 
                                            << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x19U][2U]))) << 0x13U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x19U][1U] >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x19U][2U] 
                                               << 0x12U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x19U][2U]))) 
                         >> 0xdU));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x19U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39344, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
            = (__Vtemp39344[0U] << 0x12U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
            = ((__Vtemp39344[0U] >> 0xeU) | (__Vtemp39344[1U] 
                                             << 0x12U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x13U) | 
               ((__Vtemp39344[1U] >> 0xeU) | (0x40000U 
                                              & (__Vtemp39344[2U] 
                                                 << 0x12U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xdU));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        if ((IData)((0U == (0x6000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x12U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x12U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x13U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xeU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x12U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xdU));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1aU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1aU])) {
            __Vtemp39356[0U] = 1U;
            __Vtemp39356[1U] = 0U;
            __Vtemp39356[2U] = 0U;
            __Vtemp39357[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39357[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39357[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39358, __Vtemp39356, __Vtemp39357);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] 
                = (__Vtemp39358[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] 
                = ((__Vtemp39358[0U] >> 0x1fU) | (__Vtemp39358[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] 
                = ((__Vtemp39358[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39358[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1aU][0U] << 0x14U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1aU][0U] >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x1aU][1U] 
                                            << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1aU][2U] >> 1U)))) 
                    << 0x16U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1aU][1U] >> 0xcU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1aU][2U] << 0x14U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1aU][2U] 
                                           >> 1U)))) 
                         >> 0xaU));
        } else {
            __Vtemp39367[0U] = 1U;
            __Vtemp39367[1U] = 0U;
            __Vtemp39367[2U] = 0U;
            __Vtemp39368[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39368[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39368[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39369, __Vtemp39367, __Vtemp39368);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] 
                = __Vtemp39369[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] 
                = __Vtemp39369[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] 
                = (1U & __Vtemp39369[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1aU][0U] << 0x14U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1aU][0U] >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x1aU][1U] 
                                            << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1aU][2U]))) << 0x15U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1aU][1U] >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x1aU][2U] 
                                               << 0x14U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1aU][2U]))) 
                         >> 0xbU));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1aU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39379, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
            = (__Vtemp39379[0U] << 0x14U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
            = ((__Vtemp39379[0U] >> 0xcU) | (__Vtemp39379[1U] 
                                             << 0x14U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x15U) | 
               ((__Vtemp39379[1U] >> 0xcU) | (0x100000U 
                                              & (__Vtemp39379[2U] 
                                                 << 0x14U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xbU));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        if ((IData)((0U == (0xc000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x14U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x14U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x15U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xcU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x14U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xbU));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1bU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1bU])) {
            __Vtemp39391[0U] = 1U;
            __Vtemp39391[1U] = 0U;
            __Vtemp39391[2U] = 0U;
            __Vtemp39392[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39392[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39392[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39393, __Vtemp39391, __Vtemp39392);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] 
                = (__Vtemp39393[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] 
                = ((__Vtemp39393[0U] >> 0x1fU) | (__Vtemp39393[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] 
                = ((__Vtemp39393[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39393[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1bU][0U] << 0x16U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1bU][0U] >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x1bU][1U] 
                                            << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1bU][2U] >> 1U)))) 
                    << 0x18U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1bU][1U] >> 0xaU) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1bU][2U] << 0x16U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1bU][2U] 
                                           >> 1U)))) 
                         >> 8U));
        } else {
            __Vtemp39402[0U] = 1U;
            __Vtemp39402[1U] = 0U;
            __Vtemp39402[2U] = 0U;
            __Vtemp39403[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39403[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39403[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39404, __Vtemp39402, __Vtemp39403);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] 
                = __Vtemp39404[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] 
                = __Vtemp39404[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] 
                = (1U & __Vtemp39404[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1bU][0U] << 0x16U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1bU][0U] >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x1bU][1U] 
                                            << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1bU][2U]))) << 0x17U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1bU][1U] >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x1bU][2U] 
                                               << 0x16U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1bU][2U]))) 
                         >> 9U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1bU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39414, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
            = (__Vtemp39414[0U] << 0x16U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
            = ((__Vtemp39414[0U] >> 0xaU) | (__Vtemp39414[1U] 
                                             << 0x16U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x17U) | 
               ((__Vtemp39414[1U] >> 0xaU) | (0x400000U 
                                              & (__Vtemp39414[2U] 
                                                 << 0x16U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 9U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        if ((IData)((0U == (0x18000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x16U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x16U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x17U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xaU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x16U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 9U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1cU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1cU])) {
            __Vtemp39426[0U] = 1U;
            __Vtemp39426[1U] = 0U;
            __Vtemp39426[2U] = 0U;
            __Vtemp39427[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39427[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39427[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39428, __Vtemp39426, __Vtemp39427);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] 
                = (__Vtemp39428[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] 
                = ((__Vtemp39428[0U] >> 0x1fU) | (__Vtemp39428[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] 
                = ((__Vtemp39428[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39428[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1cU][0U] << 0x18U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1cU][0U] >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1cU][1U] 
                                          << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1cU][2U] >> 1U)))) 
                    << 0x1aU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1cU][1U] >> 8U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1cU][2U] << 0x18U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1cU][2U] 
                                           >> 1U)))) 
                         >> 6U));
        } else {
            __Vtemp39437[0U] = 1U;
            __Vtemp39437[1U] = 0U;
            __Vtemp39437[2U] = 0U;
            __Vtemp39438[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39438[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39438[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39439, __Vtemp39437, __Vtemp39438);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] 
                = __Vtemp39439[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] 
                = __Vtemp39439[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] 
                = (1U & __Vtemp39439[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1cU][0U] << 0x18U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1cU][0U] >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1cU][1U] 
                                          << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1cU][2U]))) << 0x19U) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1cU][1U] >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1cU][2U] 
                                             << 0x18U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1cU][2U]))) 
                         >> 7U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1cU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39449, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
            = (__Vtemp39449[0U] << 0x18U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
            = ((__Vtemp39449[0U] >> 8U) | (__Vtemp39449[1U] 
                                           << 0x18U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x19U) | 
               ((__Vtemp39449[1U] >> 8U) | (0x1000000U 
                                            & (__Vtemp39449[2U] 
                                               << 0x18U))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 7U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        if ((IData)((0U == (0x30000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x18U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x18U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x19U) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 8U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x18U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 7U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1dU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1dU])) {
            __Vtemp39461[0U] = 1U;
            __Vtemp39461[1U] = 0U;
            __Vtemp39461[2U] = 0U;
            __Vtemp39462[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39462[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39462[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39463, __Vtemp39461, __Vtemp39462);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] 
                = (__Vtemp39463[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] 
                = ((__Vtemp39463[0U] >> 0x1fU) | (__Vtemp39463[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] 
                = ((__Vtemp39463[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39463[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1dU][0U] << 0x1aU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1dU][0U] >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1dU][1U] 
                                          << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1dU][2U] >> 1U)))) 
                    << 0x1cU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1dU][1U] >> 6U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1dU][2U] << 0x1aU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1dU][2U] 
                                           >> 1U)))) 
                         >> 4U));
        } else {
            __Vtemp39472[0U] = 1U;
            __Vtemp39472[1U] = 0U;
            __Vtemp39472[2U] = 0U;
            __Vtemp39473[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39473[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39473[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39474, __Vtemp39472, __Vtemp39473);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] 
                = __Vtemp39474[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] 
                = __Vtemp39474[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] 
                = (1U & __Vtemp39474[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1dU][0U] << 0x1aU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1dU][0U] >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1dU][1U] 
                                          << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1dU][2U]))) << 0x1bU) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1dU][1U] >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1dU][2U] 
                                             << 0x1aU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1dU][2U]))) 
                         >> 5U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1dU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39484, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
            = (__Vtemp39484[0U] << 0x1aU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
            = ((__Vtemp39484[0U] >> 6U) | (__Vtemp39484[1U] 
                                           << 0x1aU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1bU) | 
               ((__Vtemp39484[1U] >> 6U) | (0x4000000U 
                                            & (__Vtemp39484[2U] 
                                               << 0x1aU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 5U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        if ((IData)((0U == (0x60000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1aU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1aU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1bU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 6U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1aU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 5U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1eU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1eU])) {
            __Vtemp39496[0U] = 1U;
            __Vtemp39496[1U] = 0U;
            __Vtemp39496[2U] = 0U;
            __Vtemp39497[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39497[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39497[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39498, __Vtemp39496, __Vtemp39497);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] 
                = (__Vtemp39498[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] 
                = ((__Vtemp39498[0U] >> 0x1fU) | (__Vtemp39498[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] 
                = ((__Vtemp39498[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39498[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1eU][0U] << 0x1cU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1eU][0U] >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1eU][1U] 
                                          << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1eU][2U] >> 1U)))) 
                    << 0x1eU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1eU][1U] >> 4U) 
                                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1eU][2U] << 0x1cU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1eU][2U] 
                                           >> 1U)))) 
                         >> 2U));
        } else {
            __Vtemp39507[0U] = 1U;
            __Vtemp39507[1U] = 0U;
            __Vtemp39507[2U] = 0U;
            __Vtemp39508[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39508[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39508[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39509, __Vtemp39507, __Vtemp39508);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] 
                = __Vtemp39509[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] 
                = __Vtemp39509[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] 
                = (1U & __Vtemp39509[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1eU][0U] << 0x1cU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1eU][0U] >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1eU][1U] 
                                          << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1eU][2U]))) << 0x1dU) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1eU][1U] >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1eU][2U] 
                                             << 0x1cU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1eU][2U]))) 
                         >> 3U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1eU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39519, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
            = (__Vtemp39519[0U] << 0x1cU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
            = ((__Vtemp39519[0U] >> 4U) | (__Vtemp39519[1U] 
                                           << 0x1cU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1dU) | 
               ((__Vtemp39519[1U] >> 4U) | (0x10000000U 
                                            & (__Vtemp39519[2U] 
                                               << 0x1cU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 3U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        if ((IData)((0U == (0xc0000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1cU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1cU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1dU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 4U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1cU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 3U));
        }
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1fU])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1fU])) {
            __Vtemp39531[0U] = 1U;
            __Vtemp39531[1U] = 0U;
            __Vtemp39531[2U] = 0U;
            __Vtemp39532[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39532[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39532[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39533, __Vtemp39531, __Vtemp39532);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] 
                = (__Vtemp39533[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] 
                = ((__Vtemp39533[0U] >> 0x1fU) | (__Vtemp39533[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] 
                = ((__Vtemp39533[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39533[2U] 
                                                     << 1U)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1fU][0U] << 0x1eU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1fU][0U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1fU][1U] 
                                          << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1fU][1U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1fU][2U] 
                                          << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                         [0x1fU][2U] >> 1U));
        } else {
            __Vtemp39542[0U] = 1U;
            __Vtemp39542[1U] = 0U;
            __Vtemp39542[2U] = 0U;
            __Vtemp39543[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39543[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39543[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39544, __Vtemp39542, __Vtemp39543);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] 
                = __Vtemp39544[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] 
                = __Vtemp39544[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] 
                = (1U & __Vtemp39544[2U]);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1fU][0U] << 0x1eU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1fU][0U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1fU][1U] 
                                          << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1fU][2U]))) << 0x1fU) 
                   | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1fU][1U] >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1fU][2U] 
                                             << 0x1eU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1fU][2U]))) 
                         >> 1U));
        }
    } else if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1fU])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp39554, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
            = (__Vtemp39554[0U] << 0x1eU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
            = ((__Vtemp39554[0U] >> 2U) | (__Vtemp39554[1U] 
                                           << 0x1eU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1fU) | 
               ((__Vtemp39554[1U] >> 2U) | (0x40000000U 
                                            & (__Vtemp39554[2U] 
                                               << 0x1eU))));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
            = (1U & ((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 1U));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        if ((1U & (((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                    & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                          >> 0x1fU))) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                            >> 0x1fU))))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] = 0U;
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] = 0U;
        } else {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1eU);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1eU));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = (((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1fU) | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 2U) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1eU)));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 1U));
        }
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__next_pc 
        = ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__br_bus[2U])
            ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__br_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__br_bus[0U])))
            : (4ULL + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0x1fU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0x1eU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1eU][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1fU][0U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][1U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][1U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][1U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[1U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0x1fU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0x1eU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1eU][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1fU][1U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][2U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][2U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][2U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][2U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][2U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][2U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[2U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0x1fU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0x1eU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1eU][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1fU][2U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[3U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0x1fU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[4U] 
        = ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [0x1fU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [0x1eU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][3U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][0U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][0U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][0U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [1U][0U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][1U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][1U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][1U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[1U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [1U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [1U][1U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][2U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][2U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][2U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][2U])) << 1U)));
}
