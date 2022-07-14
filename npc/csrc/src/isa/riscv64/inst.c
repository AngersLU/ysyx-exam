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

void dump_gpr() {
  int i;
  for ( i = 0; i < 32; i++ ) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i] );
  }
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
