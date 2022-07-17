#include "common.h"
#include "local-include/reg.h"
#include "macro.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
/** #include <cstdint> */

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write


static int decode_exec(Decode *s) {

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
