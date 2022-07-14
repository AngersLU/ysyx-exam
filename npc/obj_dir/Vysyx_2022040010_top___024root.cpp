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
    VlWide<3>/*95:0*/ __Vtemp38130;
    VlWide<5>/*159:0*/ __Vtemp38132;
    VlWide<4>/*127:0*/ __Vtemp38138;
    VlWide<3>/*95:0*/ __Vtemp38144;
    VlWide<3>/*95:0*/ __Vtemp38145;
    VlWide<3>/*95:0*/ __Vtemp38146;
    VlWide<3>/*95:0*/ __Vtemp38153;
    VlWide<3>/*95:0*/ __Vtemp38154;
    VlWide<3>/*95:0*/ __Vtemp38160;
    VlWide<3>/*95:0*/ __Vtemp38161;
    VlWide<3>/*95:0*/ __Vtemp38165;
    VlWide<3>/*95:0*/ __Vtemp38166;
    VlWide<3>/*95:0*/ __Vtemp38167;
    VlWide<3>/*95:0*/ __Vtemp38173;
    VlWide<3>/*95:0*/ __Vtemp38174;
    VlWide<3>/*95:0*/ __Vtemp38175;
    VlWide<3>/*95:0*/ __Vtemp38193;
    VlWide<3>/*95:0*/ __Vtemp38194;
    VlWide<3>/*95:0*/ __Vtemp38195;
    VlWide<3>/*95:0*/ __Vtemp38204;
    VlWide<3>/*95:0*/ __Vtemp38205;
    VlWide<3>/*95:0*/ __Vtemp38206;
    VlWide<3>/*95:0*/ __Vtemp38216;
    VlWide<3>/*95:0*/ __Vtemp38228;
    VlWide<3>/*95:0*/ __Vtemp38229;
    VlWide<3>/*95:0*/ __Vtemp38230;
    VlWide<3>/*95:0*/ __Vtemp38239;
    VlWide<3>/*95:0*/ __Vtemp38240;
    VlWide<3>/*95:0*/ __Vtemp38241;
    VlWide<3>/*95:0*/ __Vtemp38251;
    VlWide<3>/*95:0*/ __Vtemp38263;
    VlWide<3>/*95:0*/ __Vtemp38264;
    VlWide<3>/*95:0*/ __Vtemp38265;
    VlWide<3>/*95:0*/ __Vtemp38274;
    VlWide<3>/*95:0*/ __Vtemp38275;
    VlWide<3>/*95:0*/ __Vtemp38276;
    VlWide<3>/*95:0*/ __Vtemp38286;
    VlWide<3>/*95:0*/ __Vtemp38298;
    VlWide<3>/*95:0*/ __Vtemp38299;
    VlWide<3>/*95:0*/ __Vtemp38300;
    VlWide<3>/*95:0*/ __Vtemp38309;
    VlWide<3>/*95:0*/ __Vtemp38310;
    VlWide<3>/*95:0*/ __Vtemp38311;
    VlWide<3>/*95:0*/ __Vtemp38321;
    VlWide<3>/*95:0*/ __Vtemp38333;
    VlWide<3>/*95:0*/ __Vtemp38334;
    VlWide<3>/*95:0*/ __Vtemp38335;
    VlWide<3>/*95:0*/ __Vtemp38344;
    VlWide<3>/*95:0*/ __Vtemp38345;
    VlWide<3>/*95:0*/ __Vtemp38346;
    VlWide<3>/*95:0*/ __Vtemp38356;
    VlWide<3>/*95:0*/ __Vtemp38368;
    VlWide<3>/*95:0*/ __Vtemp38369;
    VlWide<3>/*95:0*/ __Vtemp38370;
    VlWide<3>/*95:0*/ __Vtemp38379;
    VlWide<3>/*95:0*/ __Vtemp38380;
    VlWide<3>/*95:0*/ __Vtemp38381;
    VlWide<3>/*95:0*/ __Vtemp38391;
    VlWide<3>/*95:0*/ __Vtemp38403;
    VlWide<3>/*95:0*/ __Vtemp38404;
    VlWide<3>/*95:0*/ __Vtemp38405;
    VlWide<3>/*95:0*/ __Vtemp38414;
    VlWide<3>/*95:0*/ __Vtemp38415;
    VlWide<3>/*95:0*/ __Vtemp38416;
    VlWide<3>/*95:0*/ __Vtemp38426;
    VlWide<3>/*95:0*/ __Vtemp38438;
    VlWide<3>/*95:0*/ __Vtemp38439;
    VlWide<3>/*95:0*/ __Vtemp38440;
    VlWide<3>/*95:0*/ __Vtemp38449;
    VlWide<3>/*95:0*/ __Vtemp38450;
    VlWide<3>/*95:0*/ __Vtemp38451;
    VlWide<3>/*95:0*/ __Vtemp38461;
    VlWide<3>/*95:0*/ __Vtemp38473;
    VlWide<3>/*95:0*/ __Vtemp38474;
    VlWide<3>/*95:0*/ __Vtemp38475;
    VlWide<3>/*95:0*/ __Vtemp38484;
    VlWide<3>/*95:0*/ __Vtemp38485;
    VlWide<3>/*95:0*/ __Vtemp38486;
    VlWide<3>/*95:0*/ __Vtemp38496;
    VlWide<3>/*95:0*/ __Vtemp38508;
    VlWide<3>/*95:0*/ __Vtemp38509;
    VlWide<3>/*95:0*/ __Vtemp38510;
    VlWide<3>/*95:0*/ __Vtemp38519;
    VlWide<3>/*95:0*/ __Vtemp38520;
    VlWide<3>/*95:0*/ __Vtemp38521;
    VlWide<3>/*95:0*/ __Vtemp38531;
    VlWide<3>/*95:0*/ __Vtemp38543;
    VlWide<3>/*95:0*/ __Vtemp38544;
    VlWide<3>/*95:0*/ __Vtemp38545;
    VlWide<3>/*95:0*/ __Vtemp38554;
    VlWide<3>/*95:0*/ __Vtemp38555;
    VlWide<3>/*95:0*/ __Vtemp38556;
    VlWide<3>/*95:0*/ __Vtemp38566;
    VlWide<3>/*95:0*/ __Vtemp38578;
    VlWide<3>/*95:0*/ __Vtemp38579;
    VlWide<3>/*95:0*/ __Vtemp38580;
    VlWide<3>/*95:0*/ __Vtemp38589;
    VlWide<3>/*95:0*/ __Vtemp38590;
    VlWide<3>/*95:0*/ __Vtemp38591;
    VlWide<3>/*95:0*/ __Vtemp38601;
    VlWide<3>/*95:0*/ __Vtemp38613;
    VlWide<3>/*95:0*/ __Vtemp38614;
    VlWide<3>/*95:0*/ __Vtemp38615;
    VlWide<3>/*95:0*/ __Vtemp38624;
    VlWide<3>/*95:0*/ __Vtemp38625;
    VlWide<3>/*95:0*/ __Vtemp38626;
    VlWide<3>/*95:0*/ __Vtemp38636;
    VlWide<3>/*95:0*/ __Vtemp38648;
    VlWide<3>/*95:0*/ __Vtemp38649;
    VlWide<3>/*95:0*/ __Vtemp38650;
    VlWide<3>/*95:0*/ __Vtemp38659;
    VlWide<3>/*95:0*/ __Vtemp38660;
    VlWide<3>/*95:0*/ __Vtemp38661;
    VlWide<3>/*95:0*/ __Vtemp38671;
    VlWide<3>/*95:0*/ __Vtemp38683;
    VlWide<3>/*95:0*/ __Vtemp38684;
    VlWide<3>/*95:0*/ __Vtemp38685;
    VlWide<3>/*95:0*/ __Vtemp38694;
    VlWide<3>/*95:0*/ __Vtemp38695;
    VlWide<3>/*95:0*/ __Vtemp38696;
    VlWide<3>/*95:0*/ __Vtemp38706;
    VlWide<3>/*95:0*/ __Vtemp38718;
    VlWide<3>/*95:0*/ __Vtemp38719;
    VlWide<3>/*95:0*/ __Vtemp38720;
    VlWide<3>/*95:0*/ __Vtemp38729;
    VlWide<3>/*95:0*/ __Vtemp38730;
    VlWide<3>/*95:0*/ __Vtemp38731;
    VlWide<3>/*95:0*/ __Vtemp38741;
    VlWide<3>/*95:0*/ __Vtemp38753;
    VlWide<3>/*95:0*/ __Vtemp38754;
    VlWide<3>/*95:0*/ __Vtemp38755;
    VlWide<3>/*95:0*/ __Vtemp38764;
    VlWide<3>/*95:0*/ __Vtemp38765;
    VlWide<3>/*95:0*/ __Vtemp38766;
    VlWide<3>/*95:0*/ __Vtemp38776;
    VlWide<3>/*95:0*/ __Vtemp38788;
    VlWide<3>/*95:0*/ __Vtemp38789;
    VlWide<3>/*95:0*/ __Vtemp38790;
    VlWide<3>/*95:0*/ __Vtemp38799;
    VlWide<3>/*95:0*/ __Vtemp38800;
    VlWide<3>/*95:0*/ __Vtemp38801;
    VlWide<3>/*95:0*/ __Vtemp38811;
    VlWide<3>/*95:0*/ __Vtemp38823;
    VlWide<3>/*95:0*/ __Vtemp38824;
    VlWide<3>/*95:0*/ __Vtemp38825;
    VlWide<3>/*95:0*/ __Vtemp38834;
    VlWide<3>/*95:0*/ __Vtemp38835;
    VlWide<3>/*95:0*/ __Vtemp38836;
    VlWide<3>/*95:0*/ __Vtemp38846;
    VlWide<3>/*95:0*/ __Vtemp38858;
    VlWide<3>/*95:0*/ __Vtemp38859;
    VlWide<3>/*95:0*/ __Vtemp38860;
    VlWide<3>/*95:0*/ __Vtemp38869;
    VlWide<3>/*95:0*/ __Vtemp38870;
    VlWide<3>/*95:0*/ __Vtemp38871;
    VlWide<3>/*95:0*/ __Vtemp38881;
    VlWide<3>/*95:0*/ __Vtemp38893;
    VlWide<3>/*95:0*/ __Vtemp38894;
    VlWide<3>/*95:0*/ __Vtemp38895;
    VlWide<3>/*95:0*/ __Vtemp38904;
    VlWide<3>/*95:0*/ __Vtemp38905;
    VlWide<3>/*95:0*/ __Vtemp38906;
    VlWide<3>/*95:0*/ __Vtemp38916;
    VlWide<3>/*95:0*/ __Vtemp38928;
    VlWide<3>/*95:0*/ __Vtemp38929;
    VlWide<3>/*95:0*/ __Vtemp38930;
    VlWide<3>/*95:0*/ __Vtemp38939;
    VlWide<3>/*95:0*/ __Vtemp38940;
    VlWide<3>/*95:0*/ __Vtemp38941;
    VlWide<3>/*95:0*/ __Vtemp38951;
    VlWide<3>/*95:0*/ __Vtemp38963;
    VlWide<3>/*95:0*/ __Vtemp38964;
    VlWide<3>/*95:0*/ __Vtemp38965;
    VlWide<3>/*95:0*/ __Vtemp38974;
    VlWide<3>/*95:0*/ __Vtemp38975;
    VlWide<3>/*95:0*/ __Vtemp38976;
    VlWide<3>/*95:0*/ __Vtemp38986;
    VlWide<3>/*95:0*/ __Vtemp38998;
    VlWide<3>/*95:0*/ __Vtemp38999;
    VlWide<3>/*95:0*/ __Vtemp39000;
    VlWide<3>/*95:0*/ __Vtemp39009;
    VlWide<3>/*95:0*/ __Vtemp39010;
    VlWide<3>/*95:0*/ __Vtemp39011;
    VlWide<3>/*95:0*/ __Vtemp39021;
    VlWide<3>/*95:0*/ __Vtemp39033;
    VlWide<3>/*95:0*/ __Vtemp39034;
    VlWide<3>/*95:0*/ __Vtemp39035;
    VlWide<3>/*95:0*/ __Vtemp39044;
    VlWide<3>/*95:0*/ __Vtemp39045;
    VlWide<3>/*95:0*/ __Vtemp39046;
    VlWide<3>/*95:0*/ __Vtemp39056;
    VlWide<3>/*95:0*/ __Vtemp39068;
    VlWide<3>/*95:0*/ __Vtemp39069;
    VlWide<3>/*95:0*/ __Vtemp39070;
    VlWide<3>/*95:0*/ __Vtemp39079;
    VlWide<3>/*95:0*/ __Vtemp39080;
    VlWide<3>/*95:0*/ __Vtemp39081;
    VlWide<3>/*95:0*/ __Vtemp39091;
    VlWide<3>/*95:0*/ __Vtemp39103;
    VlWide<3>/*95:0*/ __Vtemp39104;
    VlWide<3>/*95:0*/ __Vtemp39105;
    VlWide<3>/*95:0*/ __Vtemp39114;
    VlWide<3>/*95:0*/ __Vtemp39115;
    VlWide<3>/*95:0*/ __Vtemp39116;
    VlWide<3>/*95:0*/ __Vtemp39126;
    VlWide<3>/*95:0*/ __Vtemp39138;
    VlWide<3>/*95:0*/ __Vtemp39139;
    VlWide<3>/*95:0*/ __Vtemp39140;
    VlWide<3>/*95:0*/ __Vtemp39149;
    VlWide<3>/*95:0*/ __Vtemp39150;
    VlWide<3>/*95:0*/ __Vtemp39151;
    VlWide<3>/*95:0*/ __Vtemp39161;
    VlWide<3>/*95:0*/ __Vtemp39173;
    VlWide<3>/*95:0*/ __Vtemp39174;
    VlWide<3>/*95:0*/ __Vtemp39175;
    VlWide<3>/*95:0*/ __Vtemp39184;
    VlWide<3>/*95:0*/ __Vtemp39185;
    VlWide<3>/*95:0*/ __Vtemp39186;
    VlWide<3>/*95:0*/ __Vtemp39196;
    VlWide<3>/*95:0*/ __Vtemp39208;
    VlWide<3>/*95:0*/ __Vtemp39209;
    VlWide<3>/*95:0*/ __Vtemp39210;
    VlWide<3>/*95:0*/ __Vtemp39219;
    VlWide<3>/*95:0*/ __Vtemp39220;
    VlWide<3>/*95:0*/ __Vtemp39221;
    VlWide<3>/*95:0*/ __Vtemp39231;
    VlWide<3>/*95:0*/ __Vtemp39243;
    VlWide<3>/*95:0*/ __Vtemp39244;
    VlWide<3>/*95:0*/ __Vtemp39245;
    VlWide<3>/*95:0*/ __Vtemp39254;
    VlWide<3>/*95:0*/ __Vtemp39255;
    VlWide<3>/*95:0*/ __Vtemp39256;
    VlWide<3>/*95:0*/ __Vtemp39266;
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
    __Vtemp38130[2U] = ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw) 
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
    __Vtemp38132[0U] = ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
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
    __Vtemp38138[0U] = (IData)((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
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
    __Vtemp38138[1U] = (IData)(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
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
    __Vtemp38138[2U] = (IData)((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
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
    __Vtemp38138[3U] = (IData)(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
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
            = __Vtemp38138[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U] 
            = __Vtemp38138[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U] 
            = __Vtemp38138[2U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U] 
            = __Vtemp38138[3U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
            = ((__Vtemp38132[0U] << 1U) | (((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
            = ((__Vtemp38132[0U] >> 0x1fU) | ((0xffffffeU 
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
                               >> 4U)) | (__Vtemp38130[2U] 
                                          << 0x1cU)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
            = ((1U & (__Vtemp38130[2U] >> 4U)) | ((
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
                                                              & (__Vtemp38130[2U] 
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
    VL_EXTEND_WQ(65,64, __Vtemp38144, (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp38145, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor);
    VL_SUB_W(3, __Vtemp38146, __Vtemp38144, __Vtemp38145);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U] 
        = __Vtemp38146[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U] 
        = __Vtemp38146[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U] 
        = (1U & __Vtemp38146[2U]);
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
    VL_EXTEND_WI(65,32, __Vtemp38153, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1));
    VL_EXTEND_WQ(65,64, __Vtemp38154, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp38153[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp38153[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp38153[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp38154[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp38154[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp38154[2U];
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
    VL_EXTEND_WI(65,32, __Vtemp38160, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b));
    VL_EXTEND_WQ(65,64, __Vtemp38161, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp38160[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp38160[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp38160[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp38161[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp38161[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp38161[2U];
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0U])) {
            __Vtemp38165[0U] = 1U;
            __Vtemp38165[1U] = 0U;
            __Vtemp38165[2U] = 0U;
            __Vtemp38166[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38166[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38166[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38167, __Vtemp38165, __Vtemp38166);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][0U] 
                = __Vtemp38167[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][1U] 
                = __Vtemp38167[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][2U] 
                = (1U & __Vtemp38167[2U]);
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
            __Vtemp38173[0U] = 1U;
            __Vtemp38173[1U] = 0U;
            __Vtemp38173[2U] = 0U;
            __Vtemp38174[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38174[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38174[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38175, __Vtemp38173, __Vtemp38174);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][0U] 
                = (__Vtemp38175[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][1U] 
                = ((__Vtemp38175[0U] >> 0x1fU) | (__Vtemp38175[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][2U] 
                = ((__Vtemp38175[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38175[2U] 
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
            __Vtemp38193[0U] = 1U;
            __Vtemp38193[1U] = 0U;
            __Vtemp38193[2U] = 0U;
            __Vtemp38194[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38194[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38194[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38195, __Vtemp38193, __Vtemp38194);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] 
                = (__Vtemp38195[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] 
                = ((__Vtemp38195[0U] >> 0x1fU) | (__Vtemp38195[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] 
                = ((__Vtemp38195[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38195[2U] 
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
            __Vtemp38204[0U] = 1U;
            __Vtemp38204[1U] = 0U;
            __Vtemp38204[2U] = 0U;
            __Vtemp38205[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38205[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38205[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38206, __Vtemp38204, __Vtemp38205);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] 
                = __Vtemp38206[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] 
                = __Vtemp38206[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] 
                = (1U & __Vtemp38206[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38216, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
            = (__Vtemp38216[0U] << 2U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
            = ((__Vtemp38216[0U] >> 0x1eU) | (__Vtemp38216[1U] 
                                              << 2U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                << 3U) | ((__Vtemp38216[1U] >> 0x1eU) 
                          | (4U & (__Vtemp38216[2U] 
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
            __Vtemp38228[0U] = 1U;
            __Vtemp38228[1U] = 0U;
            __Vtemp38228[2U] = 0U;
            __Vtemp38229[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38229[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38229[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38230, __Vtemp38228, __Vtemp38229);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] 
                = (__Vtemp38230[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] 
                = ((__Vtemp38230[0U] >> 0x1fU) | (__Vtemp38230[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] 
                = ((__Vtemp38230[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38230[2U] 
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
            __Vtemp38239[0U] = 1U;
            __Vtemp38239[1U] = 0U;
            __Vtemp38239[2U] = 0U;
            __Vtemp38240[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38240[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38240[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38241, __Vtemp38239, __Vtemp38240);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] 
                = __Vtemp38241[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] 
                = __Vtemp38241[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] 
                = (1U & __Vtemp38241[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38251, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
            = (__Vtemp38251[0U] << 4U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
            = ((__Vtemp38251[0U] >> 0x1cU) | (__Vtemp38251[1U] 
                                              << 4U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 5U) | ((__Vtemp38251[1U] >> 0x1cU) 
                          | (0x10U & (__Vtemp38251[2U] 
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
            __Vtemp38263[0U] = 1U;
            __Vtemp38263[1U] = 0U;
            __Vtemp38263[2U] = 0U;
            __Vtemp38264[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38264[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38264[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38265, __Vtemp38263, __Vtemp38264);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] 
                = (__Vtemp38265[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] 
                = ((__Vtemp38265[0U] >> 0x1fU) | (__Vtemp38265[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] 
                = ((__Vtemp38265[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38265[2U] 
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
            __Vtemp38274[0U] = 1U;
            __Vtemp38274[1U] = 0U;
            __Vtemp38274[2U] = 0U;
            __Vtemp38275[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38275[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38275[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38276, __Vtemp38274, __Vtemp38275);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] 
                = __Vtemp38276[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] 
                = __Vtemp38276[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] 
                = (1U & __Vtemp38276[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38286, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
            = (__Vtemp38286[0U] << 6U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
            = ((__Vtemp38286[0U] >> 0x1aU) | (__Vtemp38286[1U] 
                                              << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 7U) | ((__Vtemp38286[1U] >> 0x1aU) 
                          | (0x40U & (__Vtemp38286[2U] 
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
            __Vtemp38298[0U] = 1U;
            __Vtemp38298[1U] = 0U;
            __Vtemp38298[2U] = 0U;
            __Vtemp38299[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38299[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38299[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38300, __Vtemp38298, __Vtemp38299);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] 
                = (__Vtemp38300[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] 
                = ((__Vtemp38300[0U] >> 0x1fU) | (__Vtemp38300[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] 
                = ((__Vtemp38300[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38300[2U] 
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
            __Vtemp38309[0U] = 1U;
            __Vtemp38309[1U] = 0U;
            __Vtemp38309[2U] = 0U;
            __Vtemp38310[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38310[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38310[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38311, __Vtemp38309, __Vtemp38310);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] 
                = __Vtemp38311[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] 
                = __Vtemp38311[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] 
                = (1U & __Vtemp38311[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38321, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
            = (__Vtemp38321[0U] << 8U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
            = ((__Vtemp38321[0U] >> 0x18U) | (__Vtemp38321[1U] 
                                              << 8U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 9U) | ((__Vtemp38321[1U] >> 0x18U) 
                          | (0x100U & (__Vtemp38321[2U] 
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
            __Vtemp38333[0U] = 1U;
            __Vtemp38333[1U] = 0U;
            __Vtemp38333[2U] = 0U;
            __Vtemp38334[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38334[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38334[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38335, __Vtemp38333, __Vtemp38334);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] 
                = (__Vtemp38335[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] 
                = ((__Vtemp38335[0U] >> 0x1fU) | (__Vtemp38335[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] 
                = ((__Vtemp38335[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38335[2U] 
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
            __Vtemp38344[0U] = 1U;
            __Vtemp38344[1U] = 0U;
            __Vtemp38344[2U] = 0U;
            __Vtemp38345[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38345[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38345[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38346, __Vtemp38344, __Vtemp38345);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] 
                = __Vtemp38346[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] 
                = __Vtemp38346[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] 
                = (1U & __Vtemp38346[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38356, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
            = (__Vtemp38356[0U] << 0xaU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
            = ((__Vtemp38356[0U] >> 0x16U) | (__Vtemp38356[1U] 
                                              << 0xaU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 0xbU) | ((__Vtemp38356[1U] >> 0x16U) 
                            | (0x400U & (__Vtemp38356[2U] 
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
            __Vtemp38368[0U] = 1U;
            __Vtemp38368[1U] = 0U;
            __Vtemp38368[2U] = 0U;
            __Vtemp38369[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38369[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38369[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38370, __Vtemp38368, __Vtemp38369);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] 
                = (__Vtemp38370[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] 
                = ((__Vtemp38370[0U] >> 0x1fU) | (__Vtemp38370[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] 
                = ((__Vtemp38370[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38370[2U] 
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
            __Vtemp38379[0U] = 1U;
            __Vtemp38379[1U] = 0U;
            __Vtemp38379[2U] = 0U;
            __Vtemp38380[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38380[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38380[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38381, __Vtemp38379, __Vtemp38380);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] 
                = __Vtemp38381[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] 
                = __Vtemp38381[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] 
                = (1U & __Vtemp38381[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38391, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
            = (__Vtemp38391[0U] << 0xcU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
            = ((__Vtemp38391[0U] >> 0x14U) | (__Vtemp38391[1U] 
                                              << 0xcU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xdU) | ((__Vtemp38391[1U] >> 0x14U) 
                            | (0x1000U & (__Vtemp38391[2U] 
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
            __Vtemp38403[0U] = 1U;
            __Vtemp38403[1U] = 0U;
            __Vtemp38403[2U] = 0U;
            __Vtemp38404[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38404[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38404[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38405, __Vtemp38403, __Vtemp38404);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] 
                = (__Vtemp38405[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] 
                = ((__Vtemp38405[0U] >> 0x1fU) | (__Vtemp38405[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] 
                = ((__Vtemp38405[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38405[2U] 
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
            __Vtemp38414[0U] = 1U;
            __Vtemp38414[1U] = 0U;
            __Vtemp38414[2U] = 0U;
            __Vtemp38415[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38415[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38415[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38416, __Vtemp38414, __Vtemp38415);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] 
                = __Vtemp38416[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] 
                = __Vtemp38416[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] 
                = (1U & __Vtemp38416[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38426, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
            = (__Vtemp38426[0U] << 0xeU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
            = ((__Vtemp38426[0U] >> 0x12U) | (__Vtemp38426[1U] 
                                              << 0xeU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xfU) | ((__Vtemp38426[1U] >> 0x12U) 
                            | (0x4000U & (__Vtemp38426[2U] 
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
            __Vtemp38438[0U] = 1U;
            __Vtemp38438[1U] = 0U;
            __Vtemp38438[2U] = 0U;
            __Vtemp38439[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38439[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38439[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38440, __Vtemp38438, __Vtemp38439);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] 
                = (__Vtemp38440[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] 
                = ((__Vtemp38440[0U] >> 0x1fU) | (__Vtemp38440[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] 
                = ((__Vtemp38440[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38440[2U] 
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
            __Vtemp38449[0U] = 1U;
            __Vtemp38449[1U] = 0U;
            __Vtemp38449[2U] = 0U;
            __Vtemp38450[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38450[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38450[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38451, __Vtemp38449, __Vtemp38450);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] 
                = __Vtemp38451[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] 
                = __Vtemp38451[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] 
                = (1U & __Vtemp38451[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38461, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
            = (__Vtemp38461[0U] << 0x10U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
            = ((__Vtemp38461[0U] >> 0x10U) | (__Vtemp38461[1U] 
                                              << 0x10U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x11U) | ((__Vtemp38461[1U] >> 0x10U) 
                             | (0x10000U & (__Vtemp38461[2U] 
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
            __Vtemp38473[0U] = 1U;
            __Vtemp38473[1U] = 0U;
            __Vtemp38473[2U] = 0U;
            __Vtemp38474[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38474[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38474[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38475, __Vtemp38473, __Vtemp38474);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] 
                = (__Vtemp38475[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] 
                = ((__Vtemp38475[0U] >> 0x1fU) | (__Vtemp38475[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] 
                = ((__Vtemp38475[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38475[2U] 
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
            __Vtemp38484[0U] = 1U;
            __Vtemp38484[1U] = 0U;
            __Vtemp38484[2U] = 0U;
            __Vtemp38485[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38485[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38485[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38486, __Vtemp38484, __Vtemp38485);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] 
                = __Vtemp38486[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] 
                = __Vtemp38486[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] 
                = (1U & __Vtemp38486[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38496, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
            = (__Vtemp38496[0U] << 0x12U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
            = ((__Vtemp38496[0U] >> 0xeU) | (__Vtemp38496[1U] 
                                             << 0x12U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x13U) | ((__Vtemp38496[1U] >> 0xeU) 
                             | (0x40000U & (__Vtemp38496[2U] 
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
            __Vtemp38508[0U] = 1U;
            __Vtemp38508[1U] = 0U;
            __Vtemp38508[2U] = 0U;
            __Vtemp38509[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38509[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38509[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38510, __Vtemp38508, __Vtemp38509);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] 
                = (__Vtemp38510[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] 
                = ((__Vtemp38510[0U] >> 0x1fU) | (__Vtemp38510[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] 
                = ((__Vtemp38510[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38510[2U] 
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
            __Vtemp38519[0U] = 1U;
            __Vtemp38519[1U] = 0U;
            __Vtemp38519[2U] = 0U;
            __Vtemp38520[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38520[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38520[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38521, __Vtemp38519, __Vtemp38520);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] 
                = __Vtemp38521[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] 
                = __Vtemp38521[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] 
                = (1U & __Vtemp38521[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38531, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
            = (__Vtemp38531[0U] << 0x14U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
            = ((__Vtemp38531[0U] >> 0xcU) | (__Vtemp38531[1U] 
                                             << 0x14U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x15U) | ((__Vtemp38531[1U] >> 0xcU) 
                             | (0x100000U & (__Vtemp38531[2U] 
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
            __Vtemp38543[0U] = 1U;
            __Vtemp38543[1U] = 0U;
            __Vtemp38543[2U] = 0U;
            __Vtemp38544[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38544[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38544[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38545, __Vtemp38543, __Vtemp38544);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] 
                = (__Vtemp38545[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] 
                = ((__Vtemp38545[0U] >> 0x1fU) | (__Vtemp38545[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] 
                = ((__Vtemp38545[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38545[2U] 
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
            __Vtemp38554[0U] = 1U;
            __Vtemp38554[1U] = 0U;
            __Vtemp38554[2U] = 0U;
            __Vtemp38555[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38555[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38555[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38556, __Vtemp38554, __Vtemp38555);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] 
                = __Vtemp38556[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] 
                = __Vtemp38556[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] 
                = (1U & __Vtemp38556[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38566, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
            = (__Vtemp38566[0U] << 0x16U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
            = ((__Vtemp38566[0U] >> 0xaU) | (__Vtemp38566[1U] 
                                             << 0x16U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x17U) | ((__Vtemp38566[1U] >> 0xaU) 
                             | (0x400000U & (__Vtemp38566[2U] 
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
            __Vtemp38578[0U] = 1U;
            __Vtemp38578[1U] = 0U;
            __Vtemp38578[2U] = 0U;
            __Vtemp38579[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38579[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38579[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38580, __Vtemp38578, __Vtemp38579);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] 
                = (__Vtemp38580[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] 
                = ((__Vtemp38580[0U] >> 0x1fU) | (__Vtemp38580[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] 
                = ((__Vtemp38580[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38580[2U] 
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
            __Vtemp38589[0U] = 1U;
            __Vtemp38589[1U] = 0U;
            __Vtemp38589[2U] = 0U;
            __Vtemp38590[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38590[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38590[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38591, __Vtemp38589, __Vtemp38590);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] 
                = __Vtemp38591[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] 
                = __Vtemp38591[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] 
                = (1U & __Vtemp38591[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38601, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
            = (__Vtemp38601[0U] << 0x18U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
            = ((__Vtemp38601[0U] >> 8U) | (__Vtemp38601[1U] 
                                           << 0x18U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x19U) | ((__Vtemp38601[1U] >> 8U) 
                             | (0x1000000U & (__Vtemp38601[2U] 
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
            __Vtemp38613[0U] = 1U;
            __Vtemp38613[1U] = 0U;
            __Vtemp38613[2U] = 0U;
            __Vtemp38614[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38614[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38614[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38615, __Vtemp38613, __Vtemp38614);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] 
                = (__Vtemp38615[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] 
                = ((__Vtemp38615[0U] >> 0x1fU) | (__Vtemp38615[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] 
                = ((__Vtemp38615[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38615[2U] 
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
            __Vtemp38624[0U] = 1U;
            __Vtemp38624[1U] = 0U;
            __Vtemp38624[2U] = 0U;
            __Vtemp38625[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38625[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38625[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38626, __Vtemp38624, __Vtemp38625);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] 
                = __Vtemp38626[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] 
                = __Vtemp38626[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] 
                = (1U & __Vtemp38626[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38636, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
            = (__Vtemp38636[0U] << 0x1aU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
            = ((__Vtemp38636[0U] >> 6U) | (__Vtemp38636[1U] 
                                           << 0x1aU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x1bU) | ((__Vtemp38636[1U] >> 6U) 
                             | (0x4000000U & (__Vtemp38636[2U] 
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
            __Vtemp38648[0U] = 1U;
            __Vtemp38648[1U] = 0U;
            __Vtemp38648[2U] = 0U;
            __Vtemp38649[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38649[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38649[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38650, __Vtemp38648, __Vtemp38649);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] 
                = (__Vtemp38650[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] 
                = ((__Vtemp38650[0U] >> 0x1fU) | (__Vtemp38650[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] 
                = ((__Vtemp38650[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38650[2U] 
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
            __Vtemp38659[0U] = 1U;
            __Vtemp38659[1U] = 0U;
            __Vtemp38659[2U] = 0U;
            __Vtemp38660[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38660[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38660[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38661, __Vtemp38659, __Vtemp38660);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] 
                = __Vtemp38661[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] 
                = __Vtemp38661[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] 
                = (1U & __Vtemp38661[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38671, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
            = (__Vtemp38671[0U] << 0x1cU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
            = ((__Vtemp38671[0U] >> 4U) | (__Vtemp38671[1U] 
                                           << 0x1cU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1dU) | ((__Vtemp38671[1U] >> 4U) 
                             | (0x10000000U & (__Vtemp38671[2U] 
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
            __Vtemp38683[0U] = 1U;
            __Vtemp38683[1U] = 0U;
            __Vtemp38683[2U] = 0U;
            __Vtemp38684[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38684[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38684[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38685, __Vtemp38683, __Vtemp38684);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] 
                = (__Vtemp38685[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] 
                = ((__Vtemp38685[0U] >> 0x1fU) | (__Vtemp38685[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] 
                = ((__Vtemp38685[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38685[2U] 
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
            __Vtemp38694[0U] = 1U;
            __Vtemp38694[1U] = 0U;
            __Vtemp38694[2U] = 0U;
            __Vtemp38695[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38695[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38695[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38696, __Vtemp38694, __Vtemp38695);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] 
                = __Vtemp38696[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] 
                = __Vtemp38696[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] 
                = (1U & __Vtemp38696[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38706, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
            = (__Vtemp38706[0U] << 0x1eU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
            = ((__Vtemp38706[0U] >> 2U) | (__Vtemp38706[1U] 
                                           << 0x1eU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1fU) | ((__Vtemp38706[1U] >> 2U) 
                             | (0x40000000U & (__Vtemp38706[2U] 
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
            __Vtemp38718[0U] = 1U;
            __Vtemp38718[1U] = 0U;
            __Vtemp38718[2U] = 0U;
            __Vtemp38719[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38719[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38719[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38720, __Vtemp38718, __Vtemp38719);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] 
                = (__Vtemp38720[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] 
                = ((__Vtemp38720[0U] >> 0x1fU) | (__Vtemp38720[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] 
                = ((__Vtemp38720[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38720[2U] 
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
            __Vtemp38729[0U] = 1U;
            __Vtemp38729[1U] = 0U;
            __Vtemp38729[2U] = 0U;
            __Vtemp38730[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38730[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38730[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38731, __Vtemp38729, __Vtemp38730);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] 
                = __Vtemp38731[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] 
                = __Vtemp38731[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] 
                = (1U & __Vtemp38731[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38741, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
            = __Vtemp38741[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
            = __Vtemp38741[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 1U) | (1U 
                                                  & __Vtemp38741[2U]));
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
            __Vtemp38753[0U] = 1U;
            __Vtemp38753[1U] = 0U;
            __Vtemp38753[2U] = 0U;
            __Vtemp38754[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38754[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38754[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38755, __Vtemp38753, __Vtemp38754);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] 
                = (__Vtemp38755[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] 
                = ((__Vtemp38755[0U] >> 0x1fU) | (__Vtemp38755[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] 
                = ((__Vtemp38755[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38755[2U] 
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
            __Vtemp38764[0U] = 1U;
            __Vtemp38764[1U] = 0U;
            __Vtemp38764[2U] = 0U;
            __Vtemp38765[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38765[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38765[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38766, __Vtemp38764, __Vtemp38765);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] 
                = __Vtemp38766[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] 
                = __Vtemp38766[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] 
                = (1U & __Vtemp38766[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38776, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
            = (__Vtemp38776[0U] << 2U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
            = ((__Vtemp38776[0U] >> 0x1eU) | (__Vtemp38776[1U] 
                                              << 2U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 3U) | ((
                                                   __Vtemp38776[1U] 
                                                   >> 0x1eU) 
                                                  | (4U 
                                                     & (__Vtemp38776[2U] 
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
            __Vtemp38788[0U] = 1U;
            __Vtemp38788[1U] = 0U;
            __Vtemp38788[2U] = 0U;
            __Vtemp38789[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38789[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38789[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38790, __Vtemp38788, __Vtemp38789);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] 
                = (__Vtemp38790[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] 
                = ((__Vtemp38790[0U] >> 0x1fU) | (__Vtemp38790[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] 
                = ((__Vtemp38790[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38790[2U] 
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
            __Vtemp38799[0U] = 1U;
            __Vtemp38799[1U] = 0U;
            __Vtemp38799[2U] = 0U;
            __Vtemp38800[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38800[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38800[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38801, __Vtemp38799, __Vtemp38800);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] 
                = __Vtemp38801[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] 
                = __Vtemp38801[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] 
                = (1U & __Vtemp38801[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38811, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
            = (__Vtemp38811[0U] << 4U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
            = ((__Vtemp38811[0U] >> 0x1cU) | (__Vtemp38811[1U] 
                                              << 4U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 5U) | ((
                                                   __Vtemp38811[1U] 
                                                   >> 0x1cU) 
                                                  | (0x10U 
                                                     & (__Vtemp38811[2U] 
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
            __Vtemp38823[0U] = 1U;
            __Vtemp38823[1U] = 0U;
            __Vtemp38823[2U] = 0U;
            __Vtemp38824[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38824[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38824[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38825, __Vtemp38823, __Vtemp38824);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] 
                = (__Vtemp38825[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] 
                = ((__Vtemp38825[0U] >> 0x1fU) | (__Vtemp38825[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] 
                = ((__Vtemp38825[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38825[2U] 
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
            __Vtemp38834[0U] = 1U;
            __Vtemp38834[1U] = 0U;
            __Vtemp38834[2U] = 0U;
            __Vtemp38835[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38835[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38835[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38836, __Vtemp38834, __Vtemp38835);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] 
                = __Vtemp38836[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] 
                = __Vtemp38836[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] 
                = (1U & __Vtemp38836[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38846, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
            = (__Vtemp38846[0U] << 6U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
            = ((__Vtemp38846[0U] >> 0x1aU) | (__Vtemp38846[1U] 
                                              << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 7U) | ((
                                                   __Vtemp38846[1U] 
                                                   >> 0x1aU) 
                                                  | (0x40U 
                                                     & (__Vtemp38846[2U] 
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
            __Vtemp38858[0U] = 1U;
            __Vtemp38858[1U] = 0U;
            __Vtemp38858[2U] = 0U;
            __Vtemp38859[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38859[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38859[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38860, __Vtemp38858, __Vtemp38859);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] 
                = (__Vtemp38860[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] 
                = ((__Vtemp38860[0U] >> 0x1fU) | (__Vtemp38860[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] 
                = ((__Vtemp38860[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38860[2U] 
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
            __Vtemp38869[0U] = 1U;
            __Vtemp38869[1U] = 0U;
            __Vtemp38869[2U] = 0U;
            __Vtemp38870[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38870[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38870[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38871, __Vtemp38869, __Vtemp38870);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] 
                = __Vtemp38871[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] 
                = __Vtemp38871[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] 
                = (1U & __Vtemp38871[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38881, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
            = (__Vtemp38881[0U] << 8U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
            = ((__Vtemp38881[0U] >> 0x18U) | (__Vtemp38881[1U] 
                                              << 8U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 9U) | ((
                                                   __Vtemp38881[1U] 
                                                   >> 0x18U) 
                                                  | (0x100U 
                                                     & (__Vtemp38881[2U] 
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
            __Vtemp38893[0U] = 1U;
            __Vtemp38893[1U] = 0U;
            __Vtemp38893[2U] = 0U;
            __Vtemp38894[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38894[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38894[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38895, __Vtemp38893, __Vtemp38894);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] 
                = (__Vtemp38895[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] 
                = ((__Vtemp38895[0U] >> 0x1fU) | (__Vtemp38895[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] 
                = ((__Vtemp38895[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38895[2U] 
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
            __Vtemp38904[0U] = 1U;
            __Vtemp38904[1U] = 0U;
            __Vtemp38904[2U] = 0U;
            __Vtemp38905[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38905[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38905[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38906, __Vtemp38904, __Vtemp38905);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] 
                = __Vtemp38906[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] 
                = __Vtemp38906[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] 
                = (1U & __Vtemp38906[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38916, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
            = (__Vtemp38916[0U] << 0xaU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
            = ((__Vtemp38916[0U] >> 0x16U) | (__Vtemp38916[1U] 
                                              << 0xaU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xbU) | 
               ((__Vtemp38916[1U] >> 0x16U) | (0x400U 
                                               & (__Vtemp38916[2U] 
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
            __Vtemp38928[0U] = 1U;
            __Vtemp38928[1U] = 0U;
            __Vtemp38928[2U] = 0U;
            __Vtemp38929[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38929[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38929[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38930, __Vtemp38928, __Vtemp38929);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] 
                = (__Vtemp38930[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] 
                = ((__Vtemp38930[0U] >> 0x1fU) | (__Vtemp38930[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] 
                = ((__Vtemp38930[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38930[2U] 
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
            __Vtemp38939[0U] = 1U;
            __Vtemp38939[1U] = 0U;
            __Vtemp38939[2U] = 0U;
            __Vtemp38940[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38940[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38940[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38941, __Vtemp38939, __Vtemp38940);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] 
                = __Vtemp38941[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] 
                = __Vtemp38941[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] 
                = (1U & __Vtemp38941[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38951, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
            = (__Vtemp38951[0U] << 0xcU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
            = ((__Vtemp38951[0U] >> 0x14U) | (__Vtemp38951[1U] 
                                              << 0xcU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xdU) | 
               ((__Vtemp38951[1U] >> 0x14U) | (0x1000U 
                                               & (__Vtemp38951[2U] 
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
            __Vtemp38963[0U] = 1U;
            __Vtemp38963[1U] = 0U;
            __Vtemp38963[2U] = 0U;
            __Vtemp38964[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38964[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38964[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38965, __Vtemp38963, __Vtemp38964);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] 
                = (__Vtemp38965[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] 
                = ((__Vtemp38965[0U] >> 0x1fU) | (__Vtemp38965[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] 
                = ((__Vtemp38965[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp38965[2U] 
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
            __Vtemp38974[0U] = 1U;
            __Vtemp38974[1U] = 0U;
            __Vtemp38974[2U] = 0U;
            __Vtemp38975[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38975[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38975[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp38976, __Vtemp38974, __Vtemp38975);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] 
                = __Vtemp38976[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] 
                = __Vtemp38976[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] 
                = (1U & __Vtemp38976[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp38986, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
            = (__Vtemp38986[0U] << 0xeU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
            = ((__Vtemp38986[0U] >> 0x12U) | (__Vtemp38986[1U] 
                                              << 0xeU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xfU) | 
               ((__Vtemp38986[1U] >> 0x12U) | (0x4000U 
                                               & (__Vtemp38986[2U] 
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
            __Vtemp38998[0U] = 1U;
            __Vtemp38998[1U] = 0U;
            __Vtemp38998[2U] = 0U;
            __Vtemp38999[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp38999[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp38999[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39000, __Vtemp38998, __Vtemp38999);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] 
                = (__Vtemp39000[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] 
                = ((__Vtemp39000[0U] >> 0x1fU) | (__Vtemp39000[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] 
                = ((__Vtemp39000[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39000[2U] 
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
            __Vtemp39009[0U] = 1U;
            __Vtemp39009[1U] = 0U;
            __Vtemp39009[2U] = 0U;
            __Vtemp39010[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39010[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39010[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39011, __Vtemp39009, __Vtemp39010);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] 
                = __Vtemp39011[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] 
                = __Vtemp39011[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] 
                = (1U & __Vtemp39011[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39021, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
            = (__Vtemp39021[0U] << 0x10U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
            = ((__Vtemp39021[0U] >> 0x10U) | (__Vtemp39021[1U] 
                                              << 0x10U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x11U) | 
               ((__Vtemp39021[1U] >> 0x10U) | (0x10000U 
                                               & (__Vtemp39021[2U] 
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
            __Vtemp39033[0U] = 1U;
            __Vtemp39033[1U] = 0U;
            __Vtemp39033[2U] = 0U;
            __Vtemp39034[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39034[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39034[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39035, __Vtemp39033, __Vtemp39034);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] 
                = (__Vtemp39035[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] 
                = ((__Vtemp39035[0U] >> 0x1fU) | (__Vtemp39035[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] 
                = ((__Vtemp39035[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39035[2U] 
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
            __Vtemp39044[0U] = 1U;
            __Vtemp39044[1U] = 0U;
            __Vtemp39044[2U] = 0U;
            __Vtemp39045[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39045[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39045[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39046, __Vtemp39044, __Vtemp39045);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] 
                = __Vtemp39046[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] 
                = __Vtemp39046[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] 
                = (1U & __Vtemp39046[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39056, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
            = (__Vtemp39056[0U] << 0x12U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
            = ((__Vtemp39056[0U] >> 0xeU) | (__Vtemp39056[1U] 
                                             << 0x12U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x13U) | 
               ((__Vtemp39056[1U] >> 0xeU) | (0x40000U 
                                              & (__Vtemp39056[2U] 
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
            __Vtemp39068[0U] = 1U;
            __Vtemp39068[1U] = 0U;
            __Vtemp39068[2U] = 0U;
            __Vtemp39069[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39069[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39069[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39070, __Vtemp39068, __Vtemp39069);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] 
                = (__Vtemp39070[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] 
                = ((__Vtemp39070[0U] >> 0x1fU) | (__Vtemp39070[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] 
                = ((__Vtemp39070[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39070[2U] 
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
            __Vtemp39079[0U] = 1U;
            __Vtemp39079[1U] = 0U;
            __Vtemp39079[2U] = 0U;
            __Vtemp39080[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39080[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39080[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39081, __Vtemp39079, __Vtemp39080);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] 
                = __Vtemp39081[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] 
                = __Vtemp39081[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] 
                = (1U & __Vtemp39081[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39091, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
            = (__Vtemp39091[0U] << 0x14U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
            = ((__Vtemp39091[0U] >> 0xcU) | (__Vtemp39091[1U] 
                                             << 0x14U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x15U) | 
               ((__Vtemp39091[1U] >> 0xcU) | (0x100000U 
                                              & (__Vtemp39091[2U] 
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
            __Vtemp39103[0U] = 1U;
            __Vtemp39103[1U] = 0U;
            __Vtemp39103[2U] = 0U;
            __Vtemp39104[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39104[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39104[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39105, __Vtemp39103, __Vtemp39104);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] 
                = (__Vtemp39105[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] 
                = ((__Vtemp39105[0U] >> 0x1fU) | (__Vtemp39105[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] 
                = ((__Vtemp39105[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39105[2U] 
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
            __Vtemp39114[0U] = 1U;
            __Vtemp39114[1U] = 0U;
            __Vtemp39114[2U] = 0U;
            __Vtemp39115[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39115[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39115[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39116, __Vtemp39114, __Vtemp39115);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] 
                = __Vtemp39116[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] 
                = __Vtemp39116[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] 
                = (1U & __Vtemp39116[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39126, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
            = (__Vtemp39126[0U] << 0x16U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
            = ((__Vtemp39126[0U] >> 0xaU) | (__Vtemp39126[1U] 
                                             << 0x16U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x17U) | 
               ((__Vtemp39126[1U] >> 0xaU) | (0x400000U 
                                              & (__Vtemp39126[2U] 
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
            __Vtemp39138[0U] = 1U;
            __Vtemp39138[1U] = 0U;
            __Vtemp39138[2U] = 0U;
            __Vtemp39139[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39139[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39139[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39140, __Vtemp39138, __Vtemp39139);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] 
                = (__Vtemp39140[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] 
                = ((__Vtemp39140[0U] >> 0x1fU) | (__Vtemp39140[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] 
                = ((__Vtemp39140[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39140[2U] 
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
            __Vtemp39149[0U] = 1U;
            __Vtemp39149[1U] = 0U;
            __Vtemp39149[2U] = 0U;
            __Vtemp39150[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39150[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39150[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39151, __Vtemp39149, __Vtemp39150);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] 
                = __Vtemp39151[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] 
                = __Vtemp39151[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] 
                = (1U & __Vtemp39151[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39161, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
            = (__Vtemp39161[0U] << 0x18U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
            = ((__Vtemp39161[0U] >> 8U) | (__Vtemp39161[1U] 
                                           << 0x18U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x19U) | 
               ((__Vtemp39161[1U] >> 8U) | (0x1000000U 
                                            & (__Vtemp39161[2U] 
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
            __Vtemp39173[0U] = 1U;
            __Vtemp39173[1U] = 0U;
            __Vtemp39173[2U] = 0U;
            __Vtemp39174[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39174[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39174[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39175, __Vtemp39173, __Vtemp39174);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] 
                = (__Vtemp39175[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] 
                = ((__Vtemp39175[0U] >> 0x1fU) | (__Vtemp39175[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] 
                = ((__Vtemp39175[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39175[2U] 
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
            __Vtemp39184[0U] = 1U;
            __Vtemp39184[1U] = 0U;
            __Vtemp39184[2U] = 0U;
            __Vtemp39185[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39185[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39185[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39186, __Vtemp39184, __Vtemp39185);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] 
                = __Vtemp39186[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] 
                = __Vtemp39186[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] 
                = (1U & __Vtemp39186[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39196, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
            = (__Vtemp39196[0U] << 0x1aU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
            = ((__Vtemp39196[0U] >> 6U) | (__Vtemp39196[1U] 
                                           << 0x1aU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1bU) | 
               ((__Vtemp39196[1U] >> 6U) | (0x4000000U 
                                            & (__Vtemp39196[2U] 
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
            __Vtemp39208[0U] = 1U;
            __Vtemp39208[1U] = 0U;
            __Vtemp39208[2U] = 0U;
            __Vtemp39209[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39209[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39209[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39210, __Vtemp39208, __Vtemp39209);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] 
                = (__Vtemp39210[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] 
                = ((__Vtemp39210[0U] >> 0x1fU) | (__Vtemp39210[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] 
                = ((__Vtemp39210[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39210[2U] 
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
            __Vtemp39219[0U] = 1U;
            __Vtemp39219[1U] = 0U;
            __Vtemp39219[2U] = 0U;
            __Vtemp39220[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39220[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39220[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39221, __Vtemp39219, __Vtemp39220);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] 
                = __Vtemp39221[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] 
                = __Vtemp39221[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] 
                = (1U & __Vtemp39221[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39231, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
            = (__Vtemp39231[0U] << 0x1cU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
            = ((__Vtemp39231[0U] >> 4U) | (__Vtemp39231[1U] 
                                           << 0x1cU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1dU) | 
               ((__Vtemp39231[1U] >> 4U) | (0x10000000U 
                                            & (__Vtemp39231[2U] 
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
            __Vtemp39243[0U] = 1U;
            __Vtemp39243[1U] = 0U;
            __Vtemp39243[2U] = 0U;
            __Vtemp39244[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39244[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39244[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39245, __Vtemp39243, __Vtemp39244);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] 
                = (__Vtemp39245[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] 
                = ((__Vtemp39245[0U] >> 0x1fU) | (__Vtemp39245[1U] 
                                                  << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] 
                = ((__Vtemp39245[1U] >> 0x1fU) | (2U 
                                                  & (__Vtemp39245[2U] 
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
            __Vtemp39254[0U] = 1U;
            __Vtemp39254[1U] = 0U;
            __Vtemp39254[2U] = 0U;
            __Vtemp39255[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp39255[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp39255[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp39256, __Vtemp39254, __Vtemp39255);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] 
                = __Vtemp39256[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] 
                = __Vtemp39256[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] 
                = (1U & __Vtemp39256[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp39266, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
            = (__Vtemp39266[0U] << 0x1eU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
            = ((__Vtemp39266[0U] >> 2U) | (__Vtemp39266[1U] 
                                           << 0x1eU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1fU) | 
               ((__Vtemp39266[1U] >> 2U) | (0x40000000U 
                                            & (__Vtemp39266[2U] 
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
