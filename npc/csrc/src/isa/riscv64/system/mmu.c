#include "include/isa.h"
#include "include/memory/vaddr.h"
#include "include/memory/paddr.h"

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  return MEM_RET_FAIL;
}
