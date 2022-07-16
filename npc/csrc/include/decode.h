#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include "isa.h"

typedef struct {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  ISADecodeInfo isa;
  char logbuf[128];
} Decode;

int isa_exec_once(Decode *s);

#endif
