#include "include/common.h"
#include "src/isa/riscv64/local-include/reg.h"
#include "include/macro.h"
#include "include/cpu/cpu.h"
#include "include/cpu/ifetch.h"
#include "include/cpu/decode.h"
/** #include <cstdint> */
#include "verilated_dpi.h"

uint64_t *cpu_gpr = NULL;

extern Vysyx_2022040010_top* top;


extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


void dump_gpr() {
  int i;
  for ( i = 0; i < 32; i = i + 2 ) {
    printf("%s\t=0x%08lx\t", regs[i], cpu_gpr[i] );
    printf("%s\t=0x%08lx\n", regs[i+1], cpu_gpr[i+1] );
  }
  printf("pc\t0x%08lx\n", cpu.pc);
}


int isa_exec_once(Decode *s) {


  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  
  if ( top->isram_e ) {
    top->isram_rdata = s->isa.inst.val;
  }
  else top->isram_rdata = 0;

  if( top->dsram_e ) {
    if ( top->dsram_we ) {
      //TODO:modify LEN
      vaddr_write( top->dsram_addr, 8, top->dsram_wdata );
    }
    else {
      //TODO:modify LEN
      top->dsram_rdata = vaddr_read(top->dsram_addr, 8);
    }
  }
  
  else {
    // top->dsram_wdata = 0;
    top->dsram_rdata = 0;
  }


  return 0;
}
