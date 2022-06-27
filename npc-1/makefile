IMG = ""

TOPNAME = ysyx_2022040010_top

NPC_CSRC_DIR = ./csrc
NPC_VSRC_DIR = ./vsrc

OBJ_DIR = ./obj_dir/

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --cc --exe --build -Wno-fatal

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")

sim:
	@$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCS) $(VSRCS) -y $(NPC_VSRC_DIR) \
	--top-module $(TOPNAME)
	make -j -C $(OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME)
	$(OBJ_DIR)V$(TOPNAME)

run:
	$(OBJ_DIR)V$(TOPNAME) $(IMG)
