IMG = ""

#BUILD_DIR = ./playround
NPC_HOME = ~/ysyx-workbench/npc
mill = ./mill/mill

TOPNAME = ysyx_2022040010_top

NPC_CSRC_DIR = ./csrc
NPC_VSRC_DIR = ./vsrc

OBJ_DIR = ./obj_dir/

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --cc --exe --build -Wno-fatal

VSRCS = $(shell find $(abspath $(NPC_VSRC_DIR)) -name "*.v")
CSRCS = $(shell find $(abspath $(NPC_CSRC_DIR)) -name "*.cpp")


test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain Elaborate -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

sim:
	@$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCS) $(VSRCS) -y $(NPC_VSRC_DIR) \
	--top-module $(TOPNAME)
	make -j -C $(OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME)
	$(OBJ_DIR)V$(TOPNAME)
	@#gtkwave waveform.vcd

run:
	$(OBJ_DIR)V$(TOPNAME) $(IMG)

.PHONY: test verilog help compile bsp reformat checkformat clean
include ../Makefile
