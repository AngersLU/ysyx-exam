/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>


// npc difftest need 1 
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction == DIFFTEST_TO_REF)  
    paddr_write(addr, n, *(word_t *)buf);
  else assert(0);
}

//2
void difftest_regcpy(void *dut, bool direction) {
  CPU_state *s = dut;
  if(direction == DIFFTEST_TO_REF) {
    for (int i = 0; i < 32; i++ ) cpu.gpr[i] = s->gpr[i];
  }
  else if(direction == DIFFTEST_TO_DUT) {
    for (int i = 0; i < 32; i++ ) s->gpr[i] = cpu.gpr[i];
  }
  else assert(0);
}


//3
void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
