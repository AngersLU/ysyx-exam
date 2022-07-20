// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST_YSYX_2022040010_CRADDER_H_
#define VERILATED_VTEST_YSYX_2022040010_CRADDER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtest__Syms;
class Vtest_VerilatedVcd;


//----------

VL_MODULE(Vtest_ysyx_2022040010_cradder) {
  public:

    // PORTS
    VL_INW(ina,128,0,5);
    VL_INW(inb,128,0,5);
    VL_INW(inc,128,0,5);
    VL_OUTW(s,128,0,5);
    VL_OUTW(c,128,0,5);

    // INTERNAL VARIABLES
    Vtest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_ysyx_2022040010_cradder);  ///< Copying not allowed
  public:
    Vtest_ysyx_2022040010_cradder(const char* name);
    ~Vtest_ysyx_2022040010_cradder();

    // INTERNAL METHODS
    void __Vconfigure(Vtest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
