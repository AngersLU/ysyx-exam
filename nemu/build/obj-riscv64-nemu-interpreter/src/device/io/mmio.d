cmd_/home/lff/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/device/io/mmio.o := unused

source_/home/lff/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/device/io/mmio.o := src/device/io/mmio.c

deps_/home/lff/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/device/io/mmio.o := \
  /home/lff/ysyx-workbench/nemu/include/device/map.h \
  /home/lff/ysyx-workbench/nemu/include/cpu/difftest.h \
    $(wildcard include/config/difftest.h) \
  /home/lff/ysyx-workbench/nemu/include/common.h \
    $(wildcard include/config/target/am.h) \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/lff/ysyx-workbench/nemu/include/macro.h \
  /home/lff/ysyx-workbench/nemu/include/debug.h \
  /home/lff/ysyx-workbench/nemu/include/utils.h \
    $(wildcard include/config/target/native/elf.h) \
  /home/lff/ysyx-workbench/nemu/include/difftest-def.h \
    $(wildcard include/config/isa/x86.h) \
    $(wildcard include/config/isa/mips32.h) \
    $(wildcard include/config/isa/riscv32.h) \
    $(wildcard include/config/isa/riscv64.h) \

/home/lff/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/device/io/mmio.o: $(deps_/home/lff/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/device/io/mmio.o)

$(deps_/home/lff/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/device/io/mmio.o):
