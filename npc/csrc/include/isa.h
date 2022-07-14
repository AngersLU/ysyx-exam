#ifndef __ISA_H__
#define __ISA_H__

// Located at src/isa/$(GUEST_ISA)/include/isa-def.h
#include "src/isa/riscv64/include/isa-def.h"

// The macro `__GUEST_ISA__` is defined in $(CFLAGS).
// It will be expanded as "x86" or "mips32" ...

typedef riscv64_CPU_state CPU_state;
typedef riscv64_ISADecodeInfo ISADecodeInfo;

// monitor
extern char isa_logo[];
void init_isa();

// reg
extern CPU_state cpu;
// void isa_reg_display();
// word_t isa_reg_str2val(const char *name, bool *success);
void dump_gpr();

// exec
struct Decode;
int isa_exec_once(struct Decode *s);

// memory
enum { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };
#ifndef isa_mmu_check
int isa_mmu_check(vaddr_t vaddr, int len, int type);
#endif
paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);

// interrupt/exception
vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);
#define INTR_EMPTY ((word_t)-1)
word_t isa_query_intr();

// difftest
  // for dut
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();

  // for ref
void isa_difftest_regcpy(void *dut, bool direction);
void isa_difftest_raise_intr(word_t NO);

#endif
