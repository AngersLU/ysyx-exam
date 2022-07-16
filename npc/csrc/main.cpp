#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "include/common.h"
#include "include/cpu.h"
#include "include/utils.h"
#include <Vysyx_2022040010_top.h>
//#include "verilated_vcd_c.h"

uint64_t main_time = 0;  //simulation time
int ebreak_flag = 0; //ebreak flag
int ecall_flag = 0; //ecall_flag

double sc_time_stamp();
void ecall_handle();
void init_monitor(int argc, char *argv[]);
void engin_start();
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


Vysyx_2022040010_top *top = new Vysyx_2022040010_top("top");


int main(int argc, char **argv) {
     init_monitor(argc, argv);

     
     Verilated::commandArgs(argc,argv);
//     Verilated::traceEverOn(true); //out vcd wave

//     VerilatedVcdC* tfp = new VerilatedVcdC(); //out vcd wave

//     top->trace(tfp, 0);
//     tfp->open("wave.vcd"); //turn up wave.vcd

     top->rst = 1;


     // run NPC
     engine_start();



     return is_exit_status_bad();

}

