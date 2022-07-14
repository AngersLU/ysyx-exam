#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include  <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;

  vaddr_t mepc;    //triggle exception pc
  vaddr_t mstatus; //cpu status //Not commonly used
  vaddr_t mcause;  //exception reason
  vaddr_t mtvec;   //exception entry address
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
