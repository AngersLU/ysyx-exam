// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_2022040010_top.h for the primary calling header

#include "Vysyx_2022040010_top___024root.h"
#include "Vysyx_2022040010_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_2022040010_top___024root___ctor_var_reset(Vysyx_2022040010_top___024root* vlSelf);

Vysyx_2022040010_top___024root::Vysyx_2022040010_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_2022040010_top___024root___ctor_var_reset(this);
}

void Vysyx_2022040010_top___024root::__Vconfigure(Vysyx_2022040010_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_2022040010_top___024root::~Vysyx_2022040010_top___024root() {
}

void Vysyx_2022040010_top___024root___settle__TOP__1(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp162;
    VlWide<3>/*95:0*/ __Vtemp163;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<3>/*95:0*/ __Vtemp186;
    VlWide<3>/*95:0*/ __Vtemp187;
    VlWide<3>/*95:0*/ __Vtemp188;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp199;
    VlWide<3>/*95:0*/ __Vtemp209;
    VlWide<3>/*95:0*/ __Vtemp221;
    VlWide<3>/*95:0*/ __Vtemp222;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp232;
    VlWide<3>/*95:0*/ __Vtemp233;
    VlWide<3>/*95:0*/ __Vtemp234;
    VlWide<3>/*95:0*/ __Vtemp244;
    VlWide<3>/*95:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp257;
    VlWide<3>/*95:0*/ __Vtemp258;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp279;
    VlWide<3>/*95:0*/ __Vtemp291;
    VlWide<3>/*95:0*/ __Vtemp292;
    VlWide<3>/*95:0*/ __Vtemp293;
    VlWide<3>/*95:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<3>/*95:0*/ __Vtemp304;
    VlWide<3>/*95:0*/ __Vtemp314;
    VlWide<3>/*95:0*/ __Vtemp326;
    VlWide<3>/*95:0*/ __Vtemp327;
    VlWide<3>/*95:0*/ __Vtemp328;
    VlWide<3>/*95:0*/ __Vtemp337;
    VlWide<3>/*95:0*/ __Vtemp338;
    VlWide<3>/*95:0*/ __Vtemp339;
    VlWide<3>/*95:0*/ __Vtemp349;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp362;
    VlWide<3>/*95:0*/ __Vtemp363;
    VlWide<3>/*95:0*/ __Vtemp372;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<3>/*95:0*/ __Vtemp374;
    VlWide<3>/*95:0*/ __Vtemp384;
    VlWide<3>/*95:0*/ __Vtemp396;
    VlWide<3>/*95:0*/ __Vtemp397;
    VlWide<3>/*95:0*/ __Vtemp398;
    VlWide<3>/*95:0*/ __Vtemp407;
    VlWide<3>/*95:0*/ __Vtemp408;
    VlWide<3>/*95:0*/ __Vtemp409;
    VlWide<3>/*95:0*/ __Vtemp419;
    VlWide<3>/*95:0*/ __Vtemp431;
    VlWide<3>/*95:0*/ __Vtemp432;
    VlWide<3>/*95:0*/ __Vtemp433;
    VlWide<3>/*95:0*/ __Vtemp442;
    VlWide<3>/*95:0*/ __Vtemp443;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp454;
    VlWide<3>/*95:0*/ __Vtemp466;
    VlWide<3>/*95:0*/ __Vtemp467;
    VlWide<3>/*95:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp478;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp501;
    VlWide<3>/*95:0*/ __Vtemp502;
    VlWide<3>/*95:0*/ __Vtemp503;
    VlWide<3>/*95:0*/ __Vtemp512;
    VlWide<3>/*95:0*/ __Vtemp513;
    VlWide<3>/*95:0*/ __Vtemp514;
    VlWide<3>/*95:0*/ __Vtemp524;
    VlWide<3>/*95:0*/ __Vtemp536;
    VlWide<3>/*95:0*/ __Vtemp537;
    VlWide<3>/*95:0*/ __Vtemp538;
    VlWide<3>/*95:0*/ __Vtemp547;
    VlWide<3>/*95:0*/ __Vtemp548;
    VlWide<3>/*95:0*/ __Vtemp549;
    VlWide<3>/*95:0*/ __Vtemp559;
    VlWide<3>/*95:0*/ __Vtemp571;
    VlWide<3>/*95:0*/ __Vtemp572;
    VlWide<3>/*95:0*/ __Vtemp573;
    VlWide<3>/*95:0*/ __Vtemp582;
    VlWide<3>/*95:0*/ __Vtemp583;
    VlWide<3>/*95:0*/ __Vtemp584;
    VlWide<3>/*95:0*/ __Vtemp594;
    VlWide<3>/*95:0*/ __Vtemp606;
    VlWide<3>/*95:0*/ __Vtemp607;
    VlWide<3>/*95:0*/ __Vtemp608;
    VlWide<3>/*95:0*/ __Vtemp617;
    VlWide<3>/*95:0*/ __Vtemp618;
    VlWide<3>/*95:0*/ __Vtemp619;
    VlWide<3>/*95:0*/ __Vtemp629;
    VlWide<3>/*95:0*/ __Vtemp641;
    VlWide<3>/*95:0*/ __Vtemp642;
    VlWide<3>/*95:0*/ __Vtemp643;
    VlWide<3>/*95:0*/ __Vtemp652;
    VlWide<3>/*95:0*/ __Vtemp653;
    VlWide<3>/*95:0*/ __Vtemp654;
    VlWide<3>/*95:0*/ __Vtemp664;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<3>/*95:0*/ __Vtemp677;
    VlWide<3>/*95:0*/ __Vtemp678;
    VlWide<3>/*95:0*/ __Vtemp687;
    VlWide<3>/*95:0*/ __Vtemp688;
    VlWide<3>/*95:0*/ __Vtemp689;
    VlWide<3>/*95:0*/ __Vtemp699;
    VlWide<3>/*95:0*/ __Vtemp711;
    VlWide<3>/*95:0*/ __Vtemp712;
    VlWide<3>/*95:0*/ __Vtemp713;
    VlWide<3>/*95:0*/ __Vtemp722;
    VlWide<3>/*95:0*/ __Vtemp723;
    VlWide<3>/*95:0*/ __Vtemp724;
    VlWide<3>/*95:0*/ __Vtemp734;
    VlWide<3>/*95:0*/ __Vtemp746;
    VlWide<3>/*95:0*/ __Vtemp747;
    VlWide<3>/*95:0*/ __Vtemp748;
    VlWide<3>/*95:0*/ __Vtemp757;
    VlWide<3>/*95:0*/ __Vtemp758;
    VlWide<3>/*95:0*/ __Vtemp759;
    VlWide<3>/*95:0*/ __Vtemp769;
    VlWide<3>/*95:0*/ __Vtemp781;
    VlWide<3>/*95:0*/ __Vtemp782;
    VlWide<3>/*95:0*/ __Vtemp783;
    VlWide<3>/*95:0*/ __Vtemp792;
    VlWide<3>/*95:0*/ __Vtemp793;
    VlWide<3>/*95:0*/ __Vtemp794;
    VlWide<3>/*95:0*/ __Vtemp804;
    VlWide<3>/*95:0*/ __Vtemp816;
    VlWide<3>/*95:0*/ __Vtemp817;
    VlWide<3>/*95:0*/ __Vtemp818;
    VlWide<3>/*95:0*/ __Vtemp827;
    VlWide<3>/*95:0*/ __Vtemp828;
    VlWide<3>/*95:0*/ __Vtemp829;
    VlWide<3>/*95:0*/ __Vtemp839;
    VlWide<3>/*95:0*/ __Vtemp851;
    VlWide<3>/*95:0*/ __Vtemp852;
    VlWide<3>/*95:0*/ __Vtemp853;
    VlWide<3>/*95:0*/ __Vtemp862;
    VlWide<3>/*95:0*/ __Vtemp863;
    VlWide<3>/*95:0*/ __Vtemp864;
    VlWide<3>/*95:0*/ __Vtemp874;
    VlWide<3>/*95:0*/ __Vtemp886;
    VlWide<3>/*95:0*/ __Vtemp887;
    VlWide<3>/*95:0*/ __Vtemp888;
    VlWide<3>/*95:0*/ __Vtemp897;
    VlWide<3>/*95:0*/ __Vtemp898;
    VlWide<3>/*95:0*/ __Vtemp899;
    VlWide<3>/*95:0*/ __Vtemp909;
    VlWide<3>/*95:0*/ __Vtemp921;
    VlWide<3>/*95:0*/ __Vtemp922;
    VlWide<3>/*95:0*/ __Vtemp923;
    VlWide<3>/*95:0*/ __Vtemp932;
    VlWide<3>/*95:0*/ __Vtemp933;
    VlWide<3>/*95:0*/ __Vtemp934;
    VlWide<3>/*95:0*/ __Vtemp944;
    VlWide<3>/*95:0*/ __Vtemp956;
    VlWide<3>/*95:0*/ __Vtemp957;
    VlWide<3>/*95:0*/ __Vtemp958;
    VlWide<3>/*95:0*/ __Vtemp967;
    VlWide<3>/*95:0*/ __Vtemp968;
    VlWide<3>/*95:0*/ __Vtemp969;
    VlWide<3>/*95:0*/ __Vtemp979;
    VlWide<3>/*95:0*/ __Vtemp991;
    VlWide<3>/*95:0*/ __Vtemp992;
    VlWide<3>/*95:0*/ __Vtemp993;
    VlWide<3>/*95:0*/ __Vtemp1002;
    VlWide<3>/*95:0*/ __Vtemp1003;
    VlWide<3>/*95:0*/ __Vtemp1004;
    VlWide<3>/*95:0*/ __Vtemp1014;
    VlWide<3>/*95:0*/ __Vtemp1026;
    VlWide<3>/*95:0*/ __Vtemp1027;
    VlWide<3>/*95:0*/ __Vtemp1028;
    VlWide<3>/*95:0*/ __Vtemp1037;
    VlWide<3>/*95:0*/ __Vtemp1038;
    VlWide<3>/*95:0*/ __Vtemp1039;
    VlWide<3>/*95:0*/ __Vtemp1049;
    VlWide<3>/*95:0*/ __Vtemp1061;
    VlWide<3>/*95:0*/ __Vtemp1062;
    VlWide<3>/*95:0*/ __Vtemp1063;
    VlWide<3>/*95:0*/ __Vtemp1072;
    VlWide<3>/*95:0*/ __Vtemp1073;
    VlWide<3>/*95:0*/ __Vtemp1074;
    VlWide<3>/*95:0*/ __Vtemp1084;
    VlWide<3>/*95:0*/ __Vtemp1096;
    VlWide<3>/*95:0*/ __Vtemp1097;
    VlWide<3>/*95:0*/ __Vtemp1098;
    VlWide<3>/*95:0*/ __Vtemp1107;
    VlWide<3>/*95:0*/ __Vtemp1108;
    VlWide<3>/*95:0*/ __Vtemp1109;
    VlWide<3>/*95:0*/ __Vtemp1119;
    // Body
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__c[0U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x20U] 
        = (1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
           [0x20U]);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x20U] 
        = (2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
           [0x20U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp2, (((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor);
    VL_SUB_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U] 
        = __Vtemp4[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U] 
        = __Vtemp4[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U] 
        = (1U & __Vtemp4[2U]);
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
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__ce)
            ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__flag)
                ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__buf_inst
                : vlSelf->isram_rdata) : 0U);
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
    vlSelf->isram_e = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    vlSelf->isram_addr = (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg 
                          - 0x80000000ULL);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[4U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[4U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[4U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[4U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[4U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][0U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[0U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][1U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[1U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][2U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][3U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[3U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][4U] 
        = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[4U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
        = ((2U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_res_sel))
            ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U])))
            : ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_res_sel))
                ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U])))
                : 0ULL));
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start = 0U;
        if ((2U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start 
                = (1U & (~ (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)));
        } else if ((1U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start 
                = (1U & (~ (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2 = 0ULL;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2 = 0ULL;
        if ((2U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2 
                = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
        } else if ((1U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2 
                = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1 = 0ULL;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1 = 0ULL;
        if ((2U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1 
                = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
        } else if ((1U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1 
                = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed = 0U;
        if ((2U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed = 1U;
        } else if ((1U == (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed = 0U;
        }
    }
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
    VL_EXTEND_WI(65,32, __Vtemp6, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1));
    VL_EXTEND_WQ(65,64, __Vtemp7, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp6[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp6[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp6[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp7[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp7[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp7[2U];
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((2U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0xfU))) << 2U) | 
              (((1U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 1U) 
               | (0U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 0xfU))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((5U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0xfU))) << 5U) | 
              (((4U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 4U) 
               | ((3U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 3U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((8U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0xfU))) << 8U) | 
              (((7U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 7U) 
               | ((6U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 6U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0xbU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 0xfU))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0xfU))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0xfU))) << 9U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0xeU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 0xfU))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0xfU))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 0xfU))) << 0xcU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0x11U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 0xfU))) << 0xfU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0x14U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0xfU))) 
                    << 0x12U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0x17U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0xfU))) 
                    << 0x15U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0x1aU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0xfU))) 
                    << 0x18U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0x1dU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0xfU))) 
                    << 0x1bU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d) 
           | (((0x1fU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0xfU))) << 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((2U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0x14U))) << 2U) 
              | (((1U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 1U) 
                 | (0U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0x14U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((5U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0x14U))) << 5U) 
              | (((4U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 4U) 
                 | ((3U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 3U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((8U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0x14U))) << 8U) 
              | (((7U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 7U) 
                 | ((6U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 6U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0xbU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 0x14U))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 9U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0xeU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 0x14U))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 0x14U))) 
                    << 0xcU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0x11U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 0x14U))) 
                    << 0xfU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0x14U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x14U))) 
                    << 0x12U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0x17U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x14U))) 
                    << 0x15U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0x1aU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x14U))) 
                    << 0x18U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0x1dU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x14U))) 
                    << 0x1bU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d) 
           | (((0x1fU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((2U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 7U))) << 2U) | (
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 7U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 7U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((5U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 7U))) << 5U) | (
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 7U))) 
                                                    << 4U) 
                                                   | ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                           >> 7U))) 
                                                      << 3U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((8U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 7U))) << 8U) | (
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 7U))) 
                                                    << 7U) 
                                                   | ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                           >> 7U))) 
                                                      << 6U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0xbU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 7U))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 7U))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 7U))) << 9U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0xeU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                  >> 7U))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 7U))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 7U))) << 0xcU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0x11U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 7U))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 7U))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 7U))) << 0xfU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0x14U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 7U))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 7U))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 7U))) << 0x12U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0x17U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 7U))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 7U))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 7U))) << 0x15U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0x1aU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 7U))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 7U))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 7U))) << 0x18U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0x1dU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 7U))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 7U))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 7U))) << 0x1bU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d) 
           | (((0x1fU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 7U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 7U))) << 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (((2U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x19U)) << 2U) | (((1U == 
                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 1U) 
                                            | (0U == 
                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffff8U & (((5U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 5U) 
                             | (((4U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 4U) | ((3U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffffffc0U & (((8U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 8U) 
                             | (((7U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 7U) | ((6U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffe00U & (((0xbU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xbU) | (((0xaU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((9U == 
                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffff000U & (((0xeU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xeU) | (((0xdU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffff8000U & (((0x11U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x10U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffc0000U & (((0x14U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x13U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffe00000U & (((0x17U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x16U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xff000000U & (((0x1aU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x19U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xf8000000U & (((0x1dU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x1cU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xc0000000U & (((0x1fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | ((0x1eU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                >> 1U)) 
                                | ((0x1eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffff1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffffeU & (((0x23U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 3U) | (((0x22U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffff8fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffff0U & (((0x26U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 6U) | (((0x25U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 4U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffc7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffff80U & (((0x29U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 9U) | (((0x28U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 7U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffe3ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xcU) | (((0x2bU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xaU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffff1fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffe000U & (((0x2fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xfU) | (((0x2eU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xdU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfff8ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffff0000U & (((0x32U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x12U) | (((0x31U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x10U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffc7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfff80000U & (((0x35U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x15U) | (((0x34U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x13U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfe3fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffc00000U & (((0x38U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x18U) | (((0x37U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x16U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xf1ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfe000000U & (((0x3bU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1bU) | (((0x3aU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x8fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xf0000000U & (((0x3eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1eU) | (((0x3dU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1cU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | ((0x3fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffffffcU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == 
                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                                | ((0x3fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffffe3U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffffffcU & (((0x44U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 4U) | (((0x43U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffff1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffffe0U & (((0x47U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 7U) | (((0x46U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 5U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffff8ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffff00U & (((0x4aU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xaU) | (((0x49U == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 9U) | 
                                          ((0x48U == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 8U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffc7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffff800U & (((0x4dU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xdU) | (((0x4cU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xbU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffe3fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffc000U & (((0x50U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x10U) | (((0x4fU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xeU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfff1ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffe0000U & (((0x53U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x13U) | (((0x52U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x11U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xff8fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfff00000U & (((0x56U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x16U) | (((0x55U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x14U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfc7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xff800000U & (((0x59U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x19U) | (((0x58U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x17U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xe3ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfc000000U & (((0x5cU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1cU) | (((0x5bU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1aU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0x1fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xe0000000U & (((0x5fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | (((0x5eU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (((0x62U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                          >> 0x19U)) << 2U) | (((0x61U 
                                                 == 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                << 1U) 
                                               | (0x60U 
                                                  == 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffff8U & (((0x65U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 5U) | (((0x64U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffffffc0U & (((0x68U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 8U) | (((0x67U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xbU) | (((0x6aU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffff000U & (((0x6eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xeU) | (((0x6dU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffff8000U & (((0x71U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x70U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffc0000U & (((0x74U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x73U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffe00000U & (((0x77U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x76U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xff000000U & (((0x7aU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x79U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xf8000000U & (((0x7dU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x7cU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | ((0x7eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1eU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xf8U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((2U == (7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 2U) | ((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xcU))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xc7U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((5U == (7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 5U) | ((
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 4U) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0xcU))) 
                                                     << 3U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xbfU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | ((6U == (7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                            >> 0xcU))) << 6U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode 
        = (0x7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i);
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
    if ((0x8000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i 
            = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1)))
                : (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1)));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i 
            = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2)))
                : (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2)));
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i 
            = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2;
    }
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
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (((2U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((1U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffff8U & (((5U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((4U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffffffc0U & (((8U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((7U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (6U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffe00U & (((0xbU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0xaU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((9U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffff000U & (((0xeU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0xdU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffff8000U & (((0x11U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x10U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffc0000U & (((0x14U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x13U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffe00000U & (((0x17U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x16U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xff000000U & (((0x1aU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x19U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xf8000000U & (((0x1dU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x1cU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xc0000000U & (((0x1fU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | ((0x1eU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                >> 1U)) 
                                | ((0x1eU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffff1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffffeU & (((0x23U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 3U) | (((0x22U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffff8fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffff0U & (((0x26U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 6U) | (((0x25U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 4U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffc7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffff80U & (((0x29U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 9U) | (((0x28U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 7U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffe3ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xcU) | (((0x2bU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xaU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffff1fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffe000U & (((0x2fU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xfU) | (((0x2eU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xdU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfff8ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffff0000U & (((0x32U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x12U) | (((0x31U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x10U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffc7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfff80000U & (((0x35U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x15U) | (((0x34U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x13U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfe3fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffc00000U & (((0x38U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x18U) | (((0x37U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x16U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xf1ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfe000000U & (((0x3bU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1bU) | (((0x3aU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x8fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xf0000000U & (((0x3eU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1eU) | (((0x3dU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1cU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | ((0x3fU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffffffcU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode))) 
                                | ((0x3fU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffffe3U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffffffcU & (((0x44U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 4U) | (((0x43U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffff1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffffe0U & (((0x47U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 7U) | (((0x46U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 5U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffff8ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffff00U & (((0x4aU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xaU) | (((0x49U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 9U) | 
                                          ((0x48U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 8U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffc7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffff800U & (((0x4dU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xdU) | (((0x4cU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xbU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffe3fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffc000U & (((0x50U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x10U) | (((0x4fU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xeU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfff1ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffe0000U & (((0x53U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x13U) | (((0x52U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x11U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xff8fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfff00000U & (((0x56U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x16U) | (((0x55U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x14U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfc7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xff800000U & (((0x59U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x19U) | (((0x58U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x17U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xe3ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfc000000U & (((0x5cU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1cU) | (((0x5bU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1aU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0x1fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xe0000000U & (((0x5fU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | (((0x5eU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (((0x62U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((0x61U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0x60U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffff8U & (((0x65U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((0x64U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffffffc0U & (((0x68U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((0x67U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0x6aU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffff000U & (((0x6eU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0x6dU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffff8000U & (((0x71U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x70U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffc0000U & (((0x74U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x73U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffe00000U & (((0x77U == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x76U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xff000000U & (((0x7aU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x79U 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xf8000000U & (((0x7dU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x7cU 
                                             == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | ((0x7eU == (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1eU));
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
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 7U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 3U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | ((4U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     >> 0x15U)) | (2U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                         >> 0x16U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xbU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                    >> 0x15U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 5U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x14U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                    >> 0x14U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 4U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 6U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 4U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 5U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
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
    VL_EXTEND_WI(65,32, __Vtemp13, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b));
    VL_EXTEND_WQ(65,64, __Vtemp14, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp13[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp13[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp13[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp14[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp14[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp14[2U];
    }
    if ((2U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0U])) {
        if ((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0U])) {
            __Vtemp18[0U] = 1U;
            __Vtemp18[1U] = 0U;
            __Vtemp18[2U] = 0U;
            __Vtemp19[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp19[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp19[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][0U] 
                = __Vtemp20[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][1U] 
                = __Vtemp20[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][2U] 
                = (1U & __Vtemp20[2U]);
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
            __Vtemp26[0U] = 1U;
            __Vtemp26[1U] = 0U;
            __Vtemp26[2U] = 0U;
            __Vtemp27[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp27[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp27[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][0U] 
                = (__Vtemp28[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][1U] 
                = ((__Vtemp28[0U] >> 0x1fU) | (__Vtemp28[1U] 
                                               << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][2U] 
                = ((__Vtemp28[1U] >> 0x1fU) | (2U & 
                                               (__Vtemp28[2U] 
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
            __Vtemp46[0U] = 1U;
            __Vtemp46[1U] = 0U;
            __Vtemp46[2U] = 0U;
            __Vtemp47[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp47[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp47[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] 
                = (__Vtemp48[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] 
                = ((__Vtemp48[0U] >> 0x1fU) | (__Vtemp48[1U] 
                                               << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] 
                = ((__Vtemp48[1U] >> 0x1fU) | (2U & 
                                               (__Vtemp48[2U] 
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
            __Vtemp57[0U] = 1U;
            __Vtemp57[1U] = 0U;
            __Vtemp57[2U] = 0U;
            __Vtemp58[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp58[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp58[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp59, __Vtemp57, __Vtemp58);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] 
                = __Vtemp59[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] 
                = __Vtemp59[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] 
                = (1U & __Vtemp59[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp69, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
            = (__Vtemp69[0U] << 2U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
            = ((__Vtemp69[0U] >> 0x1eU) | (__Vtemp69[1U] 
                                           << 2U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                << 3U) | ((__Vtemp69[1U] >> 0x1eU) 
                          | (4U & (__Vtemp69[2U] << 2U))));
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
            __Vtemp81[0U] = 1U;
            __Vtemp81[1U] = 0U;
            __Vtemp81[2U] = 0U;
            __Vtemp82[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp82[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp82[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp83, __Vtemp81, __Vtemp82);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] 
                = (__Vtemp83[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] 
                = ((__Vtemp83[0U] >> 0x1fU) | (__Vtemp83[1U] 
                                               << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] 
                = ((__Vtemp83[1U] >> 0x1fU) | (2U & 
                                               (__Vtemp83[2U] 
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
            __Vtemp92[0U] = 1U;
            __Vtemp92[1U] = 0U;
            __Vtemp92[2U] = 0U;
            __Vtemp93[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp93[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp93[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp94, __Vtemp92, __Vtemp93);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] 
                = __Vtemp94[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] 
                = __Vtemp94[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] 
                = (1U & __Vtemp94[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp104, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
            = (__Vtemp104[0U] << 4U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
            = ((__Vtemp104[0U] >> 0x1cU) | (__Vtemp104[1U] 
                                            << 4U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 5U) | ((__Vtemp104[1U] >> 0x1cU) 
                          | (0x10U & (__Vtemp104[2U] 
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
            __Vtemp116[0U] = 1U;
            __Vtemp116[1U] = 0U;
            __Vtemp116[2U] = 0U;
            __Vtemp117[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp117[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp117[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] 
                = (__Vtemp118[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] 
                = ((__Vtemp118[0U] >> 0x1fU) | (__Vtemp118[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] 
                = ((__Vtemp118[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp118[2U] 
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
            __Vtemp127[0U] = 1U;
            __Vtemp127[1U] = 0U;
            __Vtemp127[2U] = 0U;
            __Vtemp128[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp128[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp128[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp129, __Vtemp127, __Vtemp128);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] 
                = __Vtemp129[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] 
                = __Vtemp129[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] 
                = (1U & __Vtemp129[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp139, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
            = (__Vtemp139[0U] << 6U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
            = ((__Vtemp139[0U] >> 0x1aU) | (__Vtemp139[1U] 
                                            << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 7U) | ((__Vtemp139[1U] >> 0x1aU) 
                          | (0x40U & (__Vtemp139[2U] 
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
            __Vtemp151[0U] = 1U;
            __Vtemp151[1U] = 0U;
            __Vtemp151[2U] = 0U;
            __Vtemp152[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp152[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp152[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp153, __Vtemp151, __Vtemp152);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] 
                = (__Vtemp153[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] 
                = ((__Vtemp153[0U] >> 0x1fU) | (__Vtemp153[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] 
                = ((__Vtemp153[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp153[2U] 
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
            __Vtemp162[0U] = 1U;
            __Vtemp162[1U] = 0U;
            __Vtemp162[2U] = 0U;
            __Vtemp163[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp163[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp163[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp164, __Vtemp162, __Vtemp163);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] 
                = __Vtemp164[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] 
                = __Vtemp164[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] 
                = (1U & __Vtemp164[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp174, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
            = (__Vtemp174[0U] << 8U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
            = ((__Vtemp174[0U] >> 0x18U) | (__Vtemp174[1U] 
                                            << 8U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 9U) | ((__Vtemp174[1U] >> 0x18U) 
                          | (0x100U & (__Vtemp174[2U] 
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
            __Vtemp186[0U] = 1U;
            __Vtemp186[1U] = 0U;
            __Vtemp186[2U] = 0U;
            __Vtemp187[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp187[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp187[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp188, __Vtemp186, __Vtemp187);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] 
                = (__Vtemp188[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] 
                = ((__Vtemp188[0U] >> 0x1fU) | (__Vtemp188[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] 
                = ((__Vtemp188[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp188[2U] 
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
            __Vtemp197[0U] = 1U;
            __Vtemp197[1U] = 0U;
            __Vtemp197[2U] = 0U;
            __Vtemp198[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp198[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp198[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp199, __Vtemp197, __Vtemp198);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] 
                = __Vtemp199[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] 
                = __Vtemp199[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] 
                = (1U & __Vtemp199[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp209, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
            = (__Vtemp209[0U] << 0xaU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
            = ((__Vtemp209[0U] >> 0x16U) | (__Vtemp209[1U] 
                                            << 0xaU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 0xbU) | ((__Vtemp209[1U] >> 0x16U) 
                            | (0x400U & (__Vtemp209[2U] 
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
            __Vtemp221[0U] = 1U;
            __Vtemp221[1U] = 0U;
            __Vtemp221[2U] = 0U;
            __Vtemp222[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp222[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp222[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp223, __Vtemp221, __Vtemp222);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] 
                = (__Vtemp223[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] 
                = ((__Vtemp223[0U] >> 0x1fU) | (__Vtemp223[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] 
                = ((__Vtemp223[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp223[2U] 
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
            __Vtemp232[0U] = 1U;
            __Vtemp232[1U] = 0U;
            __Vtemp232[2U] = 0U;
            __Vtemp233[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp233[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp233[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp234, __Vtemp232, __Vtemp233);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] 
                = __Vtemp234[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] 
                = __Vtemp234[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] 
                = (1U & __Vtemp234[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp244, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
            = (__Vtemp244[0U] << 0xcU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
            = ((__Vtemp244[0U] >> 0x14U) | (__Vtemp244[1U] 
                                            << 0xcU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xdU) | ((__Vtemp244[1U] >> 0x14U) 
                            | (0x1000U & (__Vtemp244[2U] 
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
            __Vtemp256[0U] = 1U;
            __Vtemp256[1U] = 0U;
            __Vtemp256[2U] = 0U;
            __Vtemp257[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp257[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp257[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp258, __Vtemp256, __Vtemp257);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] 
                = (__Vtemp258[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] 
                = ((__Vtemp258[0U] >> 0x1fU) | (__Vtemp258[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] 
                = ((__Vtemp258[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp258[2U] 
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
            __Vtemp267[0U] = 1U;
            __Vtemp267[1U] = 0U;
            __Vtemp267[2U] = 0U;
            __Vtemp268[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp268[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp268[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp269, __Vtemp267, __Vtemp268);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] 
                = __Vtemp269[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] 
                = __Vtemp269[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] 
                = (1U & __Vtemp269[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp279, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
            = (__Vtemp279[0U] << 0xeU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
            = ((__Vtemp279[0U] >> 0x12U) | (__Vtemp279[1U] 
                                            << 0xeU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xfU) | ((__Vtemp279[1U] >> 0x12U) 
                            | (0x4000U & (__Vtemp279[2U] 
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
            __Vtemp291[0U] = 1U;
            __Vtemp291[1U] = 0U;
            __Vtemp291[2U] = 0U;
            __Vtemp292[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp292[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp292[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp293, __Vtemp291, __Vtemp292);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] 
                = (__Vtemp293[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] 
                = ((__Vtemp293[0U] >> 0x1fU) | (__Vtemp293[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] 
                = ((__Vtemp293[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp293[2U] 
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
            __Vtemp302[0U] = 1U;
            __Vtemp302[1U] = 0U;
            __Vtemp302[2U] = 0U;
            __Vtemp303[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp303[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp303[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp304, __Vtemp302, __Vtemp303);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] 
                = __Vtemp304[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] 
                = __Vtemp304[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] 
                = (1U & __Vtemp304[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp314, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
            = (__Vtemp314[0U] << 0x10U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
            = ((__Vtemp314[0U] >> 0x10U) | (__Vtemp314[1U] 
                                            << 0x10U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x11U) | ((__Vtemp314[1U] >> 0x10U) 
                             | (0x10000U & (__Vtemp314[2U] 
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
            __Vtemp326[0U] = 1U;
            __Vtemp326[1U] = 0U;
            __Vtemp326[2U] = 0U;
            __Vtemp327[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp327[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp327[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp328, __Vtemp326, __Vtemp327);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] 
                = (__Vtemp328[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] 
                = ((__Vtemp328[0U] >> 0x1fU) | (__Vtemp328[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] 
                = ((__Vtemp328[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp328[2U] 
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
            __Vtemp337[0U] = 1U;
            __Vtemp337[1U] = 0U;
            __Vtemp337[2U] = 0U;
            __Vtemp338[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp338[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp338[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp339, __Vtemp337, __Vtemp338);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] 
                = __Vtemp339[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] 
                = __Vtemp339[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] 
                = (1U & __Vtemp339[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp349, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
            = (__Vtemp349[0U] << 0x12U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
            = ((__Vtemp349[0U] >> 0xeU) | (__Vtemp349[1U] 
                                           << 0x12U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x13U) | ((__Vtemp349[1U] >> 0xeU) 
                             | (0x40000U & (__Vtemp349[2U] 
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
            __Vtemp361[0U] = 1U;
            __Vtemp361[1U] = 0U;
            __Vtemp361[2U] = 0U;
            __Vtemp362[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp362[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp362[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp363, __Vtemp361, __Vtemp362);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] 
                = (__Vtemp363[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] 
                = ((__Vtemp363[0U] >> 0x1fU) | (__Vtemp363[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] 
                = ((__Vtemp363[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp363[2U] 
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
            __Vtemp372[0U] = 1U;
            __Vtemp372[1U] = 0U;
            __Vtemp372[2U] = 0U;
            __Vtemp373[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp373[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp373[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp374, __Vtemp372, __Vtemp373);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] 
                = __Vtemp374[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] 
                = __Vtemp374[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] 
                = (1U & __Vtemp374[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp384, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
            = (__Vtemp384[0U] << 0x14U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
            = ((__Vtemp384[0U] >> 0xcU) | (__Vtemp384[1U] 
                                           << 0x14U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x15U) | ((__Vtemp384[1U] >> 0xcU) 
                             | (0x100000U & (__Vtemp384[2U] 
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
            __Vtemp396[0U] = 1U;
            __Vtemp396[1U] = 0U;
            __Vtemp396[2U] = 0U;
            __Vtemp397[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp397[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp397[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp398, __Vtemp396, __Vtemp397);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] 
                = (__Vtemp398[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] 
                = ((__Vtemp398[0U] >> 0x1fU) | (__Vtemp398[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] 
                = ((__Vtemp398[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp398[2U] 
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
            __Vtemp407[0U] = 1U;
            __Vtemp407[1U] = 0U;
            __Vtemp407[2U] = 0U;
            __Vtemp408[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp408[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp408[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp409, __Vtemp407, __Vtemp408);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] 
                = __Vtemp409[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] 
                = __Vtemp409[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] 
                = (1U & __Vtemp409[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp419, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
            = (__Vtemp419[0U] << 0x16U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
            = ((__Vtemp419[0U] >> 0xaU) | (__Vtemp419[1U] 
                                           << 0x16U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x17U) | ((__Vtemp419[1U] >> 0xaU) 
                             | (0x400000U & (__Vtemp419[2U] 
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
            __Vtemp431[0U] = 1U;
            __Vtemp431[1U] = 0U;
            __Vtemp431[2U] = 0U;
            __Vtemp432[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp432[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp432[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp433, __Vtemp431, __Vtemp432);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] 
                = (__Vtemp433[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] 
                = ((__Vtemp433[0U] >> 0x1fU) | (__Vtemp433[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] 
                = ((__Vtemp433[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp433[2U] 
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
            __Vtemp442[0U] = 1U;
            __Vtemp442[1U] = 0U;
            __Vtemp442[2U] = 0U;
            __Vtemp443[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp443[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp443[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp444, __Vtemp442, __Vtemp443);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] 
                = __Vtemp444[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] 
                = __Vtemp444[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] 
                = (1U & __Vtemp444[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp454, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
            = (__Vtemp454[0U] << 0x18U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
            = ((__Vtemp454[0U] >> 8U) | (__Vtemp454[1U] 
                                         << 0x18U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x19U) | ((__Vtemp454[1U] >> 8U) 
                             | (0x1000000U & (__Vtemp454[2U] 
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
            __Vtemp466[0U] = 1U;
            __Vtemp466[1U] = 0U;
            __Vtemp466[2U] = 0U;
            __Vtemp467[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp467[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp467[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp468, __Vtemp466, __Vtemp467);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] 
                = (__Vtemp468[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] 
                = ((__Vtemp468[0U] >> 0x1fU) | (__Vtemp468[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] 
                = ((__Vtemp468[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp468[2U] 
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
            __Vtemp477[0U] = 1U;
            __Vtemp477[1U] = 0U;
            __Vtemp477[2U] = 0U;
            __Vtemp478[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp478[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp478[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp479, __Vtemp477, __Vtemp478);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] 
                = __Vtemp479[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] 
                = __Vtemp479[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] 
                = (1U & __Vtemp479[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp489, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
            = (__Vtemp489[0U] << 0x1aU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
            = ((__Vtemp489[0U] >> 6U) | (__Vtemp489[1U] 
                                         << 0x1aU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x1bU) | ((__Vtemp489[1U] >> 6U) 
                             | (0x4000000U & (__Vtemp489[2U] 
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
            __Vtemp501[0U] = 1U;
            __Vtemp501[1U] = 0U;
            __Vtemp501[2U] = 0U;
            __Vtemp502[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp502[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp502[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp503, __Vtemp501, __Vtemp502);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] 
                = (__Vtemp503[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] 
                = ((__Vtemp503[0U] >> 0x1fU) | (__Vtemp503[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] 
                = ((__Vtemp503[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp503[2U] 
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
            __Vtemp512[0U] = 1U;
            __Vtemp512[1U] = 0U;
            __Vtemp512[2U] = 0U;
            __Vtemp513[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp513[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp513[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp514, __Vtemp512, __Vtemp513);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] 
                = __Vtemp514[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] 
                = __Vtemp514[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] 
                = (1U & __Vtemp514[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp524, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
            = (__Vtemp524[0U] << 0x1cU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
            = ((__Vtemp524[0U] >> 4U) | (__Vtemp524[1U] 
                                         << 0x1cU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1dU) | ((__Vtemp524[1U] >> 4U) 
                             | (0x10000000U & (__Vtemp524[2U] 
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
            __Vtemp536[0U] = 1U;
            __Vtemp536[1U] = 0U;
            __Vtemp536[2U] = 0U;
            __Vtemp537[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp537[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp537[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp538, __Vtemp536, __Vtemp537);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] 
                = (__Vtemp538[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] 
                = ((__Vtemp538[0U] >> 0x1fU) | (__Vtemp538[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] 
                = ((__Vtemp538[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp538[2U] 
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
            __Vtemp547[0U] = 1U;
            __Vtemp547[1U] = 0U;
            __Vtemp547[2U] = 0U;
            __Vtemp548[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp548[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp548[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp549, __Vtemp547, __Vtemp548);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] 
                = __Vtemp549[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] 
                = __Vtemp549[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] 
                = (1U & __Vtemp549[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp559, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
            = (__Vtemp559[0U] << 0x1eU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
            = ((__Vtemp559[0U] >> 2U) | (__Vtemp559[1U] 
                                         << 0x1eU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1fU) | ((__Vtemp559[1U] >> 2U) 
                             | (0x40000000U & (__Vtemp559[2U] 
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
            __Vtemp571[0U] = 1U;
            __Vtemp571[1U] = 0U;
            __Vtemp571[2U] = 0U;
            __Vtemp572[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp572[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp572[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp573, __Vtemp571, __Vtemp572);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] 
                = (__Vtemp573[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] 
                = ((__Vtemp573[0U] >> 0x1fU) | (__Vtemp573[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] 
                = ((__Vtemp573[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp573[2U] 
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
            __Vtemp582[0U] = 1U;
            __Vtemp582[1U] = 0U;
            __Vtemp582[2U] = 0U;
            __Vtemp583[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp583[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp583[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp584, __Vtemp582, __Vtemp583);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] 
                = __Vtemp584[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] 
                = __Vtemp584[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] 
                = (1U & __Vtemp584[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp594, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
            = __Vtemp594[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
            = __Vtemp594[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 1U) | (1U 
                                                  & __Vtemp594[2U]));
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
            __Vtemp606[0U] = 1U;
            __Vtemp606[1U] = 0U;
            __Vtemp606[2U] = 0U;
            __Vtemp607[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp607[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp607[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp608, __Vtemp606, __Vtemp607);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] 
                = (__Vtemp608[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] 
                = ((__Vtemp608[0U] >> 0x1fU) | (__Vtemp608[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] 
                = ((__Vtemp608[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp608[2U] 
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
            __Vtemp617[0U] = 1U;
            __Vtemp617[1U] = 0U;
            __Vtemp617[2U] = 0U;
            __Vtemp618[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp618[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp618[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp619, __Vtemp617, __Vtemp618);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] 
                = __Vtemp619[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] 
                = __Vtemp619[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] 
                = (1U & __Vtemp619[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp629, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
            = (__Vtemp629[0U] << 2U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
            = ((__Vtemp629[0U] >> 0x1eU) | (__Vtemp629[1U] 
                                            << 2U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 3U) | ((
                                                   __Vtemp629[1U] 
                                                   >> 0x1eU) 
                                                  | (4U 
                                                     & (__Vtemp629[2U] 
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
            __Vtemp641[0U] = 1U;
            __Vtemp641[1U] = 0U;
            __Vtemp641[2U] = 0U;
            __Vtemp642[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp642[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp642[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp643, __Vtemp641, __Vtemp642);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] 
                = (__Vtemp643[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] 
                = ((__Vtemp643[0U] >> 0x1fU) | (__Vtemp643[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] 
                = ((__Vtemp643[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp643[2U] 
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
            __Vtemp652[0U] = 1U;
            __Vtemp652[1U] = 0U;
            __Vtemp652[2U] = 0U;
            __Vtemp653[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp653[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp653[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp654, __Vtemp652, __Vtemp653);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] 
                = __Vtemp654[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] 
                = __Vtemp654[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] 
                = (1U & __Vtemp654[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp664, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
            = (__Vtemp664[0U] << 4U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
            = ((__Vtemp664[0U] >> 0x1cU) | (__Vtemp664[1U] 
                                            << 4U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 5U) | ((
                                                   __Vtemp664[1U] 
                                                   >> 0x1cU) 
                                                  | (0x10U 
                                                     & (__Vtemp664[2U] 
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
            __Vtemp676[0U] = 1U;
            __Vtemp676[1U] = 0U;
            __Vtemp676[2U] = 0U;
            __Vtemp677[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp677[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp677[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp678, __Vtemp676, __Vtemp677);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] 
                = (__Vtemp678[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] 
                = ((__Vtemp678[0U] >> 0x1fU) | (__Vtemp678[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] 
                = ((__Vtemp678[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp678[2U] 
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
            __Vtemp687[0U] = 1U;
            __Vtemp687[1U] = 0U;
            __Vtemp687[2U] = 0U;
            __Vtemp688[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp688[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp688[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp689, __Vtemp687, __Vtemp688);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] 
                = __Vtemp689[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] 
                = __Vtemp689[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] 
                = (1U & __Vtemp689[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp699, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
            = (__Vtemp699[0U] << 6U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
            = ((__Vtemp699[0U] >> 0x1aU) | (__Vtemp699[1U] 
                                            << 6U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 7U) | ((
                                                   __Vtemp699[1U] 
                                                   >> 0x1aU) 
                                                  | (0x40U 
                                                     & (__Vtemp699[2U] 
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
            __Vtemp711[0U] = 1U;
            __Vtemp711[1U] = 0U;
            __Vtemp711[2U] = 0U;
            __Vtemp712[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp712[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp712[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp713, __Vtemp711, __Vtemp712);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] 
                = (__Vtemp713[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] 
                = ((__Vtemp713[0U] >> 0x1fU) | (__Vtemp713[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] 
                = ((__Vtemp713[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp713[2U] 
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
            __Vtemp722[0U] = 1U;
            __Vtemp722[1U] = 0U;
            __Vtemp722[2U] = 0U;
            __Vtemp723[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp723[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp723[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp724, __Vtemp722, __Vtemp723);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] 
                = __Vtemp724[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] 
                = __Vtemp724[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] 
                = (1U & __Vtemp724[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp734, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
            = (__Vtemp734[0U] << 8U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
            = ((__Vtemp734[0U] >> 0x18U) | (__Vtemp734[1U] 
                                            << 8U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 9U) | ((
                                                   __Vtemp734[1U] 
                                                   >> 0x18U) 
                                                  | (0x100U 
                                                     & (__Vtemp734[2U] 
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
            __Vtemp746[0U] = 1U;
            __Vtemp746[1U] = 0U;
            __Vtemp746[2U] = 0U;
            __Vtemp747[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp747[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp747[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp748, __Vtemp746, __Vtemp747);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] 
                = (__Vtemp748[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] 
                = ((__Vtemp748[0U] >> 0x1fU) | (__Vtemp748[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] 
                = ((__Vtemp748[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp748[2U] 
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
            __Vtemp757[0U] = 1U;
            __Vtemp757[1U] = 0U;
            __Vtemp757[2U] = 0U;
            __Vtemp758[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp758[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp758[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp759, __Vtemp757, __Vtemp758);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] 
                = __Vtemp759[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] 
                = __Vtemp759[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] 
                = (1U & __Vtemp759[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp769, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
            = (__Vtemp769[0U] << 0xaU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
            = ((__Vtemp769[0U] >> 0x16U) | (__Vtemp769[1U] 
                                            << 0xaU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xbU) | 
               ((__Vtemp769[1U] >> 0x16U) | (0x400U 
                                             & (__Vtemp769[2U] 
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
            __Vtemp781[0U] = 1U;
            __Vtemp781[1U] = 0U;
            __Vtemp781[2U] = 0U;
            __Vtemp782[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp782[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp782[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp783, __Vtemp781, __Vtemp782);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] 
                = (__Vtemp783[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] 
                = ((__Vtemp783[0U] >> 0x1fU) | (__Vtemp783[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] 
                = ((__Vtemp783[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp783[2U] 
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
            __Vtemp792[0U] = 1U;
            __Vtemp792[1U] = 0U;
            __Vtemp792[2U] = 0U;
            __Vtemp793[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp793[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp793[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp794, __Vtemp792, __Vtemp793);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] 
                = __Vtemp794[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] 
                = __Vtemp794[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] 
                = (1U & __Vtemp794[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp804, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
            = (__Vtemp804[0U] << 0xcU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
            = ((__Vtemp804[0U] >> 0x14U) | (__Vtemp804[1U] 
                                            << 0xcU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xdU) | 
               ((__Vtemp804[1U] >> 0x14U) | (0x1000U 
                                             & (__Vtemp804[2U] 
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
            __Vtemp816[0U] = 1U;
            __Vtemp816[1U] = 0U;
            __Vtemp816[2U] = 0U;
            __Vtemp817[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp817[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp817[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp818, __Vtemp816, __Vtemp817);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] 
                = (__Vtemp818[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] 
                = ((__Vtemp818[0U] >> 0x1fU) | (__Vtemp818[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] 
                = ((__Vtemp818[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp818[2U] 
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
            __Vtemp827[0U] = 1U;
            __Vtemp827[1U] = 0U;
            __Vtemp827[2U] = 0U;
            __Vtemp828[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp828[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp828[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp829, __Vtemp827, __Vtemp828);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] 
                = __Vtemp829[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] 
                = __Vtemp829[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] 
                = (1U & __Vtemp829[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp839, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
            = (__Vtemp839[0U] << 0xeU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
            = ((__Vtemp839[0U] >> 0x12U) | (__Vtemp839[1U] 
                                            << 0xeU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xfU) | 
               ((__Vtemp839[1U] >> 0x12U) | (0x4000U 
                                             & (__Vtemp839[2U] 
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
            __Vtemp851[0U] = 1U;
            __Vtemp851[1U] = 0U;
            __Vtemp851[2U] = 0U;
            __Vtemp852[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp852[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp852[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp853, __Vtemp851, __Vtemp852);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] 
                = (__Vtemp853[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] 
                = ((__Vtemp853[0U] >> 0x1fU) | (__Vtemp853[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] 
                = ((__Vtemp853[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp853[2U] 
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
            __Vtemp862[0U] = 1U;
            __Vtemp862[1U] = 0U;
            __Vtemp862[2U] = 0U;
            __Vtemp863[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp863[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp863[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp864, __Vtemp862, __Vtemp863);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] 
                = __Vtemp864[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] 
                = __Vtemp864[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] 
                = (1U & __Vtemp864[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp874, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
            = (__Vtemp874[0U] << 0x10U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
            = ((__Vtemp874[0U] >> 0x10U) | (__Vtemp874[1U] 
                                            << 0x10U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x11U) | 
               ((__Vtemp874[1U] >> 0x10U) | (0x10000U 
                                             & (__Vtemp874[2U] 
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
            __Vtemp886[0U] = 1U;
            __Vtemp886[1U] = 0U;
            __Vtemp886[2U] = 0U;
            __Vtemp887[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp887[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp887[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp888, __Vtemp886, __Vtemp887);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] 
                = (__Vtemp888[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] 
                = ((__Vtemp888[0U] >> 0x1fU) | (__Vtemp888[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] 
                = ((__Vtemp888[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp888[2U] 
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
            __Vtemp897[0U] = 1U;
            __Vtemp897[1U] = 0U;
            __Vtemp897[2U] = 0U;
            __Vtemp898[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp898[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp898[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp899, __Vtemp897, __Vtemp898);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] 
                = __Vtemp899[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] 
                = __Vtemp899[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] 
                = (1U & __Vtemp899[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp909, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
            = (__Vtemp909[0U] << 0x12U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
            = ((__Vtemp909[0U] >> 0xeU) | (__Vtemp909[1U] 
                                           << 0x12U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x13U) | 
               ((__Vtemp909[1U] >> 0xeU) | (0x40000U 
                                            & (__Vtemp909[2U] 
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
            __Vtemp921[0U] = 1U;
            __Vtemp921[1U] = 0U;
            __Vtemp921[2U] = 0U;
            __Vtemp922[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp922[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp922[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp923, __Vtemp921, __Vtemp922);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] 
                = (__Vtemp923[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] 
                = ((__Vtemp923[0U] >> 0x1fU) | (__Vtemp923[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] 
                = ((__Vtemp923[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp923[2U] 
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
            __Vtemp932[0U] = 1U;
            __Vtemp932[1U] = 0U;
            __Vtemp932[2U] = 0U;
            __Vtemp933[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp933[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp933[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp934, __Vtemp932, __Vtemp933);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] 
                = __Vtemp934[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] 
                = __Vtemp934[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] 
                = (1U & __Vtemp934[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp944, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
            = (__Vtemp944[0U] << 0x14U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
            = ((__Vtemp944[0U] >> 0xcU) | (__Vtemp944[1U] 
                                           << 0x14U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x15U) | 
               ((__Vtemp944[1U] >> 0xcU) | (0x100000U 
                                            & (__Vtemp944[2U] 
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
            __Vtemp956[0U] = 1U;
            __Vtemp956[1U] = 0U;
            __Vtemp956[2U] = 0U;
            __Vtemp957[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp957[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp957[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp958, __Vtemp956, __Vtemp957);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] 
                = (__Vtemp958[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] 
                = ((__Vtemp958[0U] >> 0x1fU) | (__Vtemp958[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] 
                = ((__Vtemp958[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp958[2U] 
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
            __Vtemp967[0U] = 1U;
            __Vtemp967[1U] = 0U;
            __Vtemp967[2U] = 0U;
            __Vtemp968[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp968[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp968[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp969, __Vtemp967, __Vtemp968);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] 
                = __Vtemp969[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] 
                = __Vtemp969[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] 
                = (1U & __Vtemp969[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp979, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
            = (__Vtemp979[0U] << 0x16U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
            = ((__Vtemp979[0U] >> 0xaU) | (__Vtemp979[1U] 
                                           << 0x16U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x17U) | 
               ((__Vtemp979[1U] >> 0xaU) | (0x400000U 
                                            & (__Vtemp979[2U] 
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
            __Vtemp991[0U] = 1U;
            __Vtemp991[1U] = 0U;
            __Vtemp991[2U] = 0U;
            __Vtemp992[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp992[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp992[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp993, __Vtemp991, __Vtemp992);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] 
                = (__Vtemp993[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] 
                = ((__Vtemp993[0U] >> 0x1fU) | (__Vtemp993[1U] 
                                                << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] 
                = ((__Vtemp993[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp993[2U] 
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
            __Vtemp1002[0U] = 1U;
            __Vtemp1002[1U] = 0U;
            __Vtemp1002[2U] = 0U;
            __Vtemp1003[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1003[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1003[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1004, __Vtemp1002, __Vtemp1003);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] 
                = __Vtemp1004[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] 
                = __Vtemp1004[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] 
                = (1U & __Vtemp1004[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp1014, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
            = (__Vtemp1014[0U] << 0x18U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
            = ((__Vtemp1014[0U] >> 8U) | (__Vtemp1014[1U] 
                                          << 0x18U));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x19U) | 
               ((__Vtemp1014[1U] >> 8U) | (0x1000000U 
                                           & (__Vtemp1014[2U] 
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
            __Vtemp1026[0U] = 1U;
            __Vtemp1026[1U] = 0U;
            __Vtemp1026[2U] = 0U;
            __Vtemp1027[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1027[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1027[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1028, __Vtemp1026, __Vtemp1027);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] 
                = (__Vtemp1028[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] 
                = ((__Vtemp1028[0U] >> 0x1fU) | (__Vtemp1028[1U] 
                                                 << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] 
                = ((__Vtemp1028[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1028[2U] 
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
            __Vtemp1037[0U] = 1U;
            __Vtemp1037[1U] = 0U;
            __Vtemp1037[2U] = 0U;
            __Vtemp1038[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1038[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1038[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1039, __Vtemp1037, __Vtemp1038);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] 
                = __Vtemp1039[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] 
                = __Vtemp1039[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] 
                = (1U & __Vtemp1039[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp1049, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
            = (__Vtemp1049[0U] << 0x1aU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
            = ((__Vtemp1049[0U] >> 6U) | (__Vtemp1049[1U] 
                                          << 0x1aU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1bU) | 
               ((__Vtemp1049[1U] >> 6U) | (0x4000000U 
                                           & (__Vtemp1049[2U] 
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
            __Vtemp1061[0U] = 1U;
            __Vtemp1061[1U] = 0U;
            __Vtemp1061[2U] = 0U;
            __Vtemp1062[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1062[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1062[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1063, __Vtemp1061, __Vtemp1062);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] 
                = (__Vtemp1063[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] 
                = ((__Vtemp1063[0U] >> 0x1fU) | (__Vtemp1063[1U] 
                                                 << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] 
                = ((__Vtemp1063[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1063[2U] 
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
            __Vtemp1072[0U] = 1U;
            __Vtemp1072[1U] = 0U;
            __Vtemp1072[2U] = 0U;
            __Vtemp1073[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1073[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1073[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1074, __Vtemp1072, __Vtemp1073);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] 
                = __Vtemp1074[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] 
                = __Vtemp1074[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] 
                = (1U & __Vtemp1074[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp1084, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
            = (__Vtemp1084[0U] << 0x1cU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
            = ((__Vtemp1084[0U] >> 4U) | (__Vtemp1084[1U] 
                                          << 0x1cU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1dU) | 
               ((__Vtemp1084[1U] >> 4U) | (0x10000000U 
                                           & (__Vtemp1084[2U] 
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
            __Vtemp1096[0U] = 1U;
            __Vtemp1096[1U] = 0U;
            __Vtemp1096[2U] = 0U;
            __Vtemp1097[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1097[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1097[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1098, __Vtemp1096, __Vtemp1097);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] 
                = (__Vtemp1098[0U] << 1U);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] 
                = ((__Vtemp1098[0U] >> 0x1fU) | (__Vtemp1098[1U] 
                                                 << 1U));
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] 
                = ((__Vtemp1098[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1098[2U] 
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
            __Vtemp1107[0U] = 1U;
            __Vtemp1107[1U] = 0U;
            __Vtemp1107[2U] = 0U;
            __Vtemp1108[0U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1108[1U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1108[2U] = (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1109, __Vtemp1107, __Vtemp1108);
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] 
                = __Vtemp1109[0U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] 
                = __Vtemp1109[1U];
            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] 
                = (1U & __Vtemp1109[2U]);
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
        VL_SHIFTL_WWI(65,65,32, __Vtemp1119, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
            = (__Vtemp1119[0U] << 0x1eU);
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
            = ((__Vtemp1119[0U] >> 2U) | (__Vtemp1119[1U] 
                                          << 0x1eU));
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
            = (((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1fU) | 
               ((__Vtemp1119[1U] >> 2U) | (0x40000000U 
                                           & (__Vtemp1119[2U] 
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
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((7U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
              << 3U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xdU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
              << 1U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xeU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or)) 
              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((6U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | (((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add)) 
                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__alu_op 
        = ((0x800U & (((((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi)) 
                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
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
                       << 0xbU) | (0xff800U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                               >> 0xcU)))) 
           | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
               << 0xaU) | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                            << 9U) | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                       << 8U) | (((
                                                   (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc)) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci)) 
                                                  << 7U) 
                                                 | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs)) 
                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi)) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                                                        << 5U) 
                                                       | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                                           << 4U) 
                                                          | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                                              << 3U) 
                                                             | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                                                 << 2U) 
                                                                | ((2U 
                                                                    & (((0x3feU 
                                                                         & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                            >> 0x16U)) 
                                                                        | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                           << 1U)) 
                                                                       | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                          << 1U))) 
                                                                   | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak)))))))))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 1U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 2U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 3U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 4U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 5U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 6U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 7U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 8U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 9U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xaU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xbU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xcU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xdU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xeU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xfU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x10U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x11U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x12U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x13U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x14U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x15U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x16U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x17U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x18U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x19U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1aU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1bU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1cU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1dU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1eU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c 
        = (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 1U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 2U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 3U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 4U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 5U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 6U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 7U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 8U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 9U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xaU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xbU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xcU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xdU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xeU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xfU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x10U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x11U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x12U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x13U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x14U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x15U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x16U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x17U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x18U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x19U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1aU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1bU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1cU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1dU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1eU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c 
        = (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (1U & ((((((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | (((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                     | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (2U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 1U))) 
                        << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 1U)) << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 1U)) << 1U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 1U)) << 1U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 1U)) 
                                                 << 1U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (4U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 2U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 2U))) 
                        << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 2U)) << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 2U)) << 2U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 2U)) << 2U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 2U)) 
                                                 << 2U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (8U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 3U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 3U))) 
                        << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 3U)) << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 3U)) << 3U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 3U)) << 3U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 3U)) 
                                                 << 3U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 4U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 4U))) 
                           << 4U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 4U)) << 4U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 4U)) << 4U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 4U)) << 4U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 4U)) << 4U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 5U))) 
                           << 5U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 5U)) << 5U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 5U)) << 5U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 5U)) << 5U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 5U)) << 5U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 6U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 6U))) 
                           << 6U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 6U)) << 6U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 6U)) << 6U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 6U)) << 6U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 6U)) << 6U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 7U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 7U))) 
                           << 7U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 7U)) << 7U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 7U)) << 7U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 7U)) << 7U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 7U)) << 7U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x100U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 8U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               >> 8U))) 
                            << 8U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 8U)) << 8U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 8U)) << 8U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 8U)) << 8U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 8U)) << 8U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x200U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 9U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               >> 9U))) 
                            << 9U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 9U)) << 9U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 9U)) << 9U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 9U)) << 9U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 9U)) << 9U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x400U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 0xaU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                 >> 0xaU))) 
                            << 0xaU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0xaU)) << 0xaU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xaU)) << 0xaU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 0xaU)) << 0xaU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 0xaU)) << 0xaU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x800U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 0xbU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                 >> 0xbU))) 
                            << 0xbU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xbU)) << 0xbU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 0xbU)) << 0xbU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 0xbU)) << 0xbU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x1000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xcU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xcU))) 
                             << 0xcU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xcU)) << 0xcU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xcU)) << 0xcU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xcU)) << 0xcU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xcU)) << 0xcU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x2000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xdU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xdU))) 
                             << 0xdU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xdU)) << 0xdU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xdU)) << 0xdU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xdU)) << 0xdU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x4000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xeU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xeU))) 
                             << 0xeU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xeU)) << 0xeU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xeU)) << 0xeU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xeU)) << 0xeU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x8000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xfU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xfU))) 
                             << 0xfU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xfU)) << 0xfU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xfU)) << 0xfU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xfU)) << 0xfU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xfU)) << 0xfU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x10U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x10U))) 
                              << 0x10U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x10U)) << 0x10U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x10U)) << 0x10U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x10U)) << 0x10U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x10U)) << 0x10U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x11U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x11U))) 
                              << 0x11U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x11U)) << 0x11U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x11U)) << 0x11U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x11U)) << 0x11U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x11U)) << 0x11U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x12U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x12U))) 
                              << 0x12U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x12U)) << 0x12U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x12U)) << 0x12U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x12U)) << 0x12U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x12U)) << 0x12U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x13U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x13U))) 
                              << 0x13U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x13U)) << 0x13U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x13U)) << 0x13U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x13U)) << 0x13U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x100000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x14U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x14U))) 
                               << 0x14U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x14U)) << 0x14U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x14U)) << 0x14U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x14U)) << 0x14U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x14U)) << 0x14U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x200000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x15U))) 
                               << 0x15U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x15U)) << 0x15U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x15U)) << 0x15U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x15U)) << 0x15U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x400000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x16U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x16U))) 
                               << 0x16U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x16U)) << 0x16U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x16U)) << 0x16U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x16U)) << 0x16U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x800000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x17U))) 
                               << 0x17U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x17U)) << 0x17U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x17U)) << 0x17U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x17U)) << 0x17U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x17U)) << 0x17U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x1000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x18U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x18U))) 
                                << 0x18U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x18U)) << 0x18U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x18U)) 
                                    << 0x18U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x18U)) 
                                                       << 0x18U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x18U)) 
                                                      << 0x18U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x2000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x19U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x19U))) 
                                << 0x19U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x19U)) 
                                    << 0x19U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x19U)) 
                                                       << 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x19U)) 
                                                      << 0x19U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x4000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x1aU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1aU))) 
                                << 0x1aU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x1aU)) 
                                    << 0x1aU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x1aU)) 
                                                       << 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x1aU)) 
                                                      << 0x1aU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x8000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x1bU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1bU))) 
                                << 0x1bU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x1bU)) << 0x1bU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x1bU)) 
                                    << 0x1bU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x1bU)) 
                                                       << 0x1bU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x1bU)) 
                                                      << 0x1bU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1cU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1cU))) << 0x1cU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1cU)) 
                                     << 0x1cU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1cU)) << 0x1cU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1cU)) << 0x1cU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1dU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1dU))) << 0x1dU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1dU)) 
                                    << 0x1dU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1dU)) 
                                     << 0x1dU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1dU)) << 0x1dU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1dU)) << 0x1dU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1eU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1eU))) << 0x1eU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1eU)) 
                                    << 0x1eU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1eU)) 
                                     << 0x1eU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1eU)) << 0x1eU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1eU)) << 0x1eU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1fU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1fU))) << 0x1fU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1fU)) 
                                    << 0x1fU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1fU)) 
                                     << 0x1fU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1fU)) << 0x1fU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1fU)) << 0x1fU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (1U & ((((((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | (((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                     | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (2U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 1U))) 
                        << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 1U)) << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 1U)) << 1U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 1U)) << 1U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 1U)) 
                                                 << 1U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (4U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 2U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 2U))) 
                        << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 2U)) << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 2U)) << 2U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 2U)) << 2U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 2U)) 
                                                 << 2U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (8U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 3U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 3U))) 
                        << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 3U)) << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 3U)) << 3U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 3U)) << 3U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 3U)) 
                                                 << 3U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 4U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 4U))) 
                           << 4U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 4U)) << 4U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 4U)) << 4U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 4U)) << 4U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 4U)) << 4U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 5U))) 
                           << 5U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 5U)) << 5U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 5U)) << 5U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 5U)) << 5U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 5U)) << 5U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 6U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 6U))) 
                           << 6U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 6U)) << 6U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 6U)) << 6U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 6U)) << 6U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 6U)) << 6U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 7U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 7U))) 
                           << 7U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 7U)) << 7U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 7U)) << 7U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 7U)) << 7U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 7U)) << 7U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x100U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 8U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               >> 8U))) 
                            << 8U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 8U)) << 8U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 8U)) << 8U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 8U)) << 8U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 8U)) << 8U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x200U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 9U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               >> 9U))) 
                            << 9U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 9U)) << 9U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 9U)) << 9U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 9U)) << 9U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 9U)) << 9U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x400U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 0xaU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                 >> 0xaU))) 
                            << 0xaU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0xaU)) << 0xaU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xaU)) << 0xaU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 0xaU)) << 0xaU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 0xaU)) << 0xaU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x800U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 0xbU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                 >> 0xbU))) 
                            << 0xbU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xbU)) << 0xbU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 0xbU)) << 0xbU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 0xbU)) << 0xbU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x1000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xcU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xcU))) 
                             << 0xcU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xcU)) << 0xcU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xcU)) << 0xcU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xcU)) << 0xcU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xcU)) << 0xcU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x2000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xdU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xdU))) 
                             << 0xdU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xdU)) << 0xdU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xdU)) << 0xdU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xdU)) << 0xdU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x4000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xeU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xeU))) 
                             << 0xeU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xeU)) << 0xeU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xeU)) << 0xeU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xeU)) << 0xeU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x8000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xfU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xfU))) 
                             << 0xfU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xfU)) << 0xfU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xfU)) << 0xfU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xfU)) << 0xfU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xfU)) << 0xfU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x10U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x10U))) 
                              << 0x10U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x10U)) << 0x10U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x10U)) << 0x10U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x10U)) << 0x10U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x10U)) << 0x10U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x11U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x11U))) 
                              << 0x11U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x11U)) << 0x11U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x11U)) << 0x11U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x11U)) << 0x11U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x11U)) << 0x11U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x12U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x12U))) 
                              << 0x12U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x12U)) << 0x12U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x12U)) << 0x12U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x12U)) << 0x12U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x12U)) << 0x12U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x13U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x13U))) 
                              << 0x13U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x13U)) << 0x13U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x13U)) << 0x13U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x13U)) << 0x13U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x100000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x14U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x14U))) 
                               << 0x14U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x14U)) << 0x14U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x14U)) << 0x14U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x14U)) << 0x14U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x14U)) << 0x14U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x200000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x15U))) 
                               << 0x15U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x15U)) << 0x15U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x15U)) << 0x15U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x15U)) << 0x15U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x400000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x16U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x16U))) 
                               << 0x16U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x16U)) << 0x16U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x16U)) << 0x16U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x16U)) << 0x16U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x800000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x17U))) 
                               << 0x17U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x17U)) << 0x17U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x17U)) << 0x17U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x17U)) << 0x17U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x17U)) << 0x17U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x1000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x18U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x18U))) 
                                << 0x18U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x18U)) << 0x18U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x18U)) 
                                    << 0x18U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x18U)) 
                                                       << 0x18U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x18U)) 
                                                      << 0x18U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x2000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x19U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x19U))) 
                                << 0x19U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x19U)) 
                                    << 0x19U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x19U)) 
                                                       << 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x19U)) 
                                                      << 0x19U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x4000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x1aU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1aU))) 
                                << 0x1aU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x1aU)) 
                                    << 0x1aU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x1aU)) 
                                                       << 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x1aU)) 
                                                      << 0x1aU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x8000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x1bU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1bU))) 
                                << 0x1bU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x1bU)) << 0x1bU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x1bU)) 
                                    << 0x1bU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x1bU)) 
                                                       << 0x1bU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x1bU)) 
                                                      << 0x1bU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1cU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1cU))) << 0x1cU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1cU)) 
                                     << 0x1cU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1cU)) << 0x1cU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1cU)) << 0x1cU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1dU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1dU))) << 0x1dU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1dU)) 
                                    << 0x1dU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1dU)) 
                                     << 0x1dU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1dU)) << 0x1dU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1dU)) << 0x1dU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1eU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1eU))) << 0x1eU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1eU)) 
                                    << 0x1eU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1eU)) 
                                     << 0x1eU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1eU)) << 0x1eU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1eU)) << 0x1eU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1fU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1fU))) << 0x1fU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1fU)) 
                                    << 0x1fU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1fU)) 
                                     << 0x1fU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1fU)) << 0x1fU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1fU)) << 0x1fU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
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
}
