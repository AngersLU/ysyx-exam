# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtest.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtest \
	Vtest___024root \
	Vtest___024root__1 \
	Vtest___024root__2 \
	Vtest_ysyx_2022040010_cradder \
	Vtest_ysyx_2022040010_cradder__1 \
	Vtest_ysyx_2022040010_cradder__2 \
	Vtest_ysyx_2022040010_cradder__3 \
	Vtest_ysyx_2022040010_cradder__4 \
	Vtest_ysyx_2022040010_cradder__5 \
	Vtest_ysyx_2022040010_cradder__6 \
	Vtest_ysyx_2022040010_cradder__7 \
	Vtest_ysyx_2022040010_cradder__8 \
	Vtest_ysyx_2022040010_cradder__9 \
	Vtest_ysyx_2022040010_cradder__10 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtest__ConstPool_0 \
	Vtest___024root__Slow \
	Vtest___024root__1__Slow \
	Vtest_ysyx_2022040010_cradder__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtest__Dpi \
	Vtest__Trace \
	Vtest__Trace__1 \
	Vtest__Trace__2 \
	Vtest__Trace__3 \
	Vtest__Trace__4 \
	Vtest__Trace__5 \
	Vtest__Trace__6 \
	Vtest__Trace__7 \
	Vtest__Trace__8 \
	Vtest__Trace__9 \
	Vtest__Trace__10 \
	Vtest__Trace__11 \
	Vtest__Trace__12 \
	Vtest__Trace__13 \
	Vtest__Trace__14 \
	Vtest__Trace__15 \
	Vtest__Trace__16 \
	Vtest__Trace__17 \
	Vtest__Trace__18 \
	Vtest__Trace__19 \
	Vtest__Trace__20 \
	Vtest__Trace__21 \
	Vtest__Trace__22 \
	Vtest__Trace__23 \
	Vtest__Trace__24 \
	Vtest__Trace__25 \
	Vtest__Trace__26 \
	Vtest__Trace__27 \
	Vtest__Trace__28 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtest__Syms \
	Vtest__Trace__Slow \
	Vtest__Trace__1__Slow \
	Vtest__Trace__2__Slow \
	Vtest__Trace__3__Slow \
	Vtest__Trace__4__Slow \
	Vtest__Trace__5__Slow \
	Vtest__Trace__6__Slow \
	Vtest__Trace__7__Slow \
	Vtest__Trace__8__Slow \
	Vtest__Trace__9__Slow \
	Vtest__Trace__10__Slow \
	Vtest__Trace__11__Slow \
	Vtest__Trace__12__Slow \
	Vtest__Trace__13__Slow \
	Vtest__Trace__14__Slow \
	Vtest__Trace__15__Slow \
	Vtest__Trace__16__Slow \
	Vtest__Trace__17__Slow \
	Vtest__Trace__18__Slow \
	Vtest__Trace__19__Slow \
	Vtest__Trace__20__Slow \
	Vtest__Trace__21__Slow \
	Vtest__Trace__22__Slow \
	Vtest__Trace__23__Slow \
	Vtest__Trace__24__Slow \
	Vtest__Trace__25__Slow \
	Vtest__Trace__26__Slow \
	Vtest__Trace__27__Slow \
	Vtest__Trace__28__Slow \
	Vtest__Trace__29__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
