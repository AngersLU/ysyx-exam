// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/lff/ysyx-workbench/npc/vsrc/exe_stage.v:478:34
    extern void ebreak();
    // DPI import at /home/lff/ysyx-workbench/npc/vsrc/top.v:25:34
    extern void mem_read(long long raddr, long long* rdata);
    // DPI import at /home/lff/ysyx-workbench/npc/vsrc/top.v:27:34
    extern void mem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/lff/ysyx-workbench/npc/vsrc/regfile.v:31:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
