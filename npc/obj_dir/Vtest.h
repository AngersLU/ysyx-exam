// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTEST_H_
#define VERILATED_VTEST_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vtest__Syms;
class Vtest___024root;
class VerilatedVcdC;
class Vtest_VerilatedVcd;
class Vtest_ysyx_2022040010_cradder;


// This class is the main interface to the Verilated model
class Vtest VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtest__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN64(&addr_i,63,0);
    VL_OUT64(&addr_o,63,0);
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&isram_e,0,0);
    VL_OUT64(&isram_addr,63,0);
    VL_IN(&isram_rdata,31,0);
    VL_OUT8(&dsram_e,0,0);
    VL_OUT8(&dsram_we,0,0);
    VL_OUT64(&debug_wb_pc,63,0);
    VL_OUT8(&bubble,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux;
    Vtest_ysyx_2022040010_cradder* const __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtest___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtest(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtest(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtest();
  private:
    VL_UNCOPYABLE(Vtest);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
