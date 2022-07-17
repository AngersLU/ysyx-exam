#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include <generated/autoconf.h>
#include <macro.h>

#ifdef CONFIG_TARGET_AM
#include <klib.h>
#else
#include <assert.h>
#include <stdlib.h>
#endif

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef uint64_t word_t;
typedef int64_t sword_t;
#define FMT_WORD "0x%016lx"

typedef word_t vaddr_t;
typedef uint64_t paddr_t;
#define FMT_PADDR "0x%016lx"
typedef uint16_t ioaddr_t;

#include <debug.h>

#endif
