#include <math.h>
#include <proc.h>
#include <elf.h>
#include <stdint.h>
#include <string.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV  //%d 243
#else
# error Unsupported ISA
#endif

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define ENTRY ((void *)0x83000000)

extern size_t ramdisk_read(void *buf, size_t offset, size_t len); //to buffer
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len); //to ramdisk
extern size_t get_ramdisk_size(); //return ramdisak size

static uintptr_t loader(PCB *pcb, const char *filename) {

  Elf_Ehdr elfhdr = {};
  Elf_Phdr elfphdr1 = {};
  Elf_Phdr elfphdr2 = {};

  ramdisk_read(&elfhdr, 0, get_ramdisk_size());
  assert(*(uint32_t *)elfhdr.e_ident == 0x464c457f);
  ramdisk_read(&elfphdr1, elfhdr.e_phoff, elfhdr.e_phentsize);
  ramdisk_read(&elfphdr2, elfhdr.e_phoff+elfhdr.e_phentsize, elfhdr.e_phentsize);

  ramdisk_read((void *)elfphdr1.p_vaddr, elfphdr1.p_offset, elfphdr1.p_memsz);
  ramdisk_read((void *)elfphdr2.p_vaddr, elfphdr2.p_offset, elfphdr2.p_memsz);
  // memset((void *)(elfphdr1.p_vaddr+elfphdr1.p_memsz), 0, elfphdr1.p_align);
  memset((void *)(elfphdr2.p_vaddr+elfphdr2.p_filesz), 0, (elfphdr2.p_memsz-elfphdr2.p_filesz));
  // Log("elfphdr1.p_vaddr:%x",(void *)elfphdr1.p_vaddr);
  // Log("elfphdr2.p_vaddr:%x",(void *)elfphdr2.p_vaddr);
  // Log("elfhdr.e_entry: 0x%x",elfhdr.e_entry);
  if(EXPECT_TYPE == 243) {
    return elfhdr.e_entry;
  }
  else {
    panic("Loader ISA is not riscv64/riscv32!");
  }

  // char *loader_buf = (char *)malloc(elfphdr1.p_memsz);
  // Elf64_Addr *p = (Elf64_Addr *)elfphdr1.p_vaddr;

  // memcpy((void *)elfphdr1.p_vaddr, &ramdisk_start + elfphdr1.p_offset, elfphdr1.p_memsz);
  // memcpy(p, loader_buf, elfphdr1.p_memsz);
  // free(loader_buf);



  // ramdisk_read( ENTRY, 0, get_ramdisk_size());
  // ramdisk_read( &elfhdr, 0, get_ramdisk_size());
  // Log("get_ramdisk_size:0x%x",get_ramdisk_size());
  // Log("%x", *(uint32_t *)elfhdr.e_ident);

  // return elfhdr.e_entry;

  // ramdisk_read((void *)0x83000000, 0, get_ramdisk_size());

  // ramdisk_read((void *)0x83005c30, 0, 0x1038);
  // memset((void *)0x83004c30, 0, 0x1000);
  // memset((void *)0x83006c18, 0, (0x1038-0xfe8));
  // return (uintptr_t)(0x83000430);
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = 0x%x", entry);
  ((void(*)())entry) ();
}

