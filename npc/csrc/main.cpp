#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <include/common.h>
#include <include/cpu/cpu.h>
#include <include/utils.h>
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h"

uint64_t main_time = 0;  //simulation time
int ebreak_flag = 0; //ebreak flag
int ecall_flag = 0; //ecall_flag

double sc_time_stamp();
void ecall_handle();
void init_monitor(int argc, char *argv[]);
void engine_start();
int is_exit_status_bad();

extern "C" void ebreak() {
     ebreak_flag = 1;
}

extern "C" void ecall() {
	ecall_flag = 1;
}


double sc_time_stamp() {
     return main_time;
}

Vtop* top = new Vtop;


int main(int argc, char **argv) {
     init_monitor(argc, argv);


     // VerilatedContext* contextp = new VerilatedContext;
     // contextp->commandArgs(argc, argv);
     // Vtop* top = new Vtop{contextp};

     // VerilatedVcdC* tfp = new VerilatedVcdC;
     // contextp->traceEverOn(true);
     // top->trace(tfp, 0);
     // tfp->open("wave.vcd");

     top->rst = 1;


     // run NPC
     engine_start();

     delete top;
     // tfp->close();
     // delete contextp;
     

     return is_exit_status_bad();

}

