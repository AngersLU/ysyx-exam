CXXSRC = $(NPC_HOME)/csrc/src/utils/disasm.cc
LLVM_CXXFLAGS += $(shell llvm-config-11 --cxxflags) -fPIE
LLVM_LIBS += $(shell llvm-config-11 --libs)


FILELIST_MK = $(shell find .src -name "filelist.mk")
include $(FILELIST_MK)



TOPNAME = top

NPC_CSRC_DIR ?= $(NPC_HOME)/csrc
C_INC += $(NPC_HOME)/csrc/include
NPC_VSRC_DIR ?= $(NPC_HOME)/vsrc
#NPC_MAIN_DIR ?= $(NPC_HOME)/csrc 

BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)
$(shell mkdir -p $(BUILD_DIR))

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --cc \
	--build -O3 --x-assign fast --x-initial fast --noassert	\
	-LDFLAGS "-lreadline -ldl -pie $(LLVM_CXXFLAGS) $(LLVM_LIBS) -lSDL2"

LDFLAGS += -lSDL2 -lSDL2_image -ldl 

VSRCS = $(shell find $(abspath $(NPC_VSRC_DIR)) -name "*.v")
CSRCS = $(shell find $(abspath $(NPC_CSRC_DIR)) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


# rulers for verilator
INCFLAGS = $(addprefix -I, $(NPC_CSRC_DIR))
INCFLAGS += $(addprefix -I, $(C_INC))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""



verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)

$(BIN): $(VSRCS) $(CSRCS) 
	@rm -rf $(OBJ_DIR)
	@$(VERILATOR) $(VERILATOR_CFLAGS)  \
	--top-module $(TOPNAME) $(CSRCS) $(VSRCS) $(addprefix -CFLAGS , $(CFLAGS)) \
	--Mdir $(BUILD_DIR) -I$(abspath ./vsrc) --exe -o $(abspath $(BIN))
	#./obj_dir/Vtop
	#gtkwave wave.vcd
$(IMAGE).bin: image

run: $(BIN)
	@$^

.PHONY: test verilog help compile bsp reformat checkformat clean
include ../Makefile


