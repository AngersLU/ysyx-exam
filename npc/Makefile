include /usr/local/share/verilator/include/verilated.mk
VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc) -name "*.v")
CSRCS = $(shell find $(abspath $(NPC_HOME)/csrc) -name "*.cpp") 
HSRCS = $(shell find $(abspath $(NPC_HOME)/csrc) -name "*.h")

TOP_NAME = top
VDIR = $(NPC_HOME)/vsrc
CDIR = $(NPC_HOME)/csrc
IMG ?=
AGRS ?=

BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir

BIN = $(BUILD_DIR)/$(TOP_NAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#rules for verilator
VERILATOR_FLAGS += -MMD --build -cc --exe --trace  \
	-O3 --x-assign fast --x-initial fast --noassert \
	--timescale "1ns/1ns"  

INC_PATH = $(NPC_HOME)/vsrc
INCFLAGS = $(addprefix -I , $(INC_PATH))
VCFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOP_NAME)\""
#LDFLAGS +=-lSLD2 -lSDL2_image -ldl

$(BIN): $(VSRCS) $(CSRCS) $(HSRCS)
	@rm -rf $(OBJ_DIR)
	verilator $(VERILATOR_FLAGS) \
		--top-module $(TOP_NAME) $(VSRCS) $(CSRCS) \
		$(addprefix -CFLAGS , $(VCFLAGS)) \
		--Mdir $(OBJ_DIR) -I$(VDIR) --exe -o $(abspath $(BIN))
	

run: $(BIN) $(IMAGE) $(ARGS)
	@$^
	./build/obj_dir/Vtop
	$(call git_commit, "npc simlation")

gtk:
	@gtkwave $(OBJ_DIR)/Vtop.vcd

git:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	rm -rf $(OBJ_DIR)

.PHONY:clean
include ../Makefile
