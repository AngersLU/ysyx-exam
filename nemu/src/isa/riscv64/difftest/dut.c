#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"


extern const char* regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	for(int i=0;i<32;i++) {
		if(!difftest_check_reg(regs[i],pc,ref_r->gpr[i],cpu.gpr[i]) || (ref_r->pc != pc))	return false;
	}
   	return true;
}


void isa_difftest_attach() {
}
