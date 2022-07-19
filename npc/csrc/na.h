#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <assert.h>
#include <getopt.h>

void exit_now();
void dump_gpr();

extern struct CPU_state
{
  uint64_t gpr[32];
  uint64_t pc;
}cpuu; 

