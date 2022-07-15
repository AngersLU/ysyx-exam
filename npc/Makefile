CXXSRC = $(NPC_HOME)/csrc/src/utils/disasm.cc
LLVM_CXXFLAGS += $(shell llvm-config-11 --cxxflags) -fPIE
LLVM_LIBS = $(shell llvm-config-11 --libs)

TOPNAME = ysyx_2022040010_top

NPC_CSRC_DIR ?= $(NPC_HOME)/csrc
NPC_VSRC_DIR ?= $(NPC_HOME)/vsrc
#NPC_MAIN_DIR ?= $(NPC_HOME)/csrc 

BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = $(NPC_HOME)/obj_dir
BIN = $(NPC_HOME)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --cc --exe	\
	--build -O3 --x-assign fast --x-initial fast --noassert	\
	-LDFLAGS "-lreadline -ldl -pie $(LLVM_CXXFLAGS) $(LLVM_LIBS) -lSDL2"

LDFLAGS += -lSDL2 -lSDL2_image -ldl 

VSRCS = $(shell find $(abspath $(NPC_VSRC_DIR)) -name "*.v")
CSRCS = $(shell find $(abspath $(NPC_CSRC_DIR)) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


# rulers for verilator
INCFLAGS = $(addprefix -I, $(NPC_CSRC_DIR))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""



verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)

$(BIN): $(VSRCS) $(CSRCS) 
	@rm -rf $(OBJ_DIR)
	@$(VERILATOR) $(VERILATOR_CFLAGS)  --top-module $(TOPNAME) $(CSRCS) $(VSRCS) $(addprefix -CFLAGS , $(CFLAGS)) --Mdir $(OBJ_DIR) -I$(abspath ./vsrc) --exe -o $(abspath $(BIN))

$(IMAGE).bin: image

run: $(BIN) $(IMAGE).bin
	@$^

.PHONY: test verilog help compile bsp reformat checkformat clean
include ../Makefile


