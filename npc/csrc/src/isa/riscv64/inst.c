#include "common.h"
#include "local-include/reg.h"
#include "macro.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
/** #include <cstdint> */
#include "verilated_dpi.h"

uint64_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenAarryHandle r) {
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
    top->isram_data = s->isa.inst.val;
  }
  else top->isram_data = 0;

  if( top->dsram_e ) {
    if ( top->dsram_we ) {
      paddr_write( top->dsram_addr, TODO:LEN, top->dsram_wdata );
    }
    else {
      top->dsram_rdata = paddr_read(top->dsram_addr, TODO:LEN);
    }
  }
  
  else {
    // top->dsram_wdata = 0;
    top->dsram_rdata = 0;
  }


  return decode_exec(s);
}
