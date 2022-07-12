#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vysyx_2022040010_top.h"
//#include "verilated_vcd_c.h"

vluint64_t main_time = 0;  //simulation time

int ebreak_flag = 0; //ebreak flag
int ecall_flaag = 0; //ecall_flag

extern "C" void ebreak() {
     ebreak_flag = 1;
}

extern "C" void ecall() {
	ecall_flag = 1;
}


double sc_time_stamp();
void ecall_handle();


double sc_time_stamp() {
     return main_time;
}

void ecall_handle () {
	printf("Please add call() related functions!\n");
	printf("\33[1;35;40m Here is $NPC_HOME/csrc/main.cpp \33[0m \n");
} 

int main(int argc,char **argv) {

     Verilated::commandArgs(argc,argv);
//     Verilated::traceEverOn(true); //out vcd wave

//     VerilatedVcdC* tfp = new VerilatedVcdC(); //out vcd wave

     Vysyx_2022040010_top *top = new Vysyx_2022040010_top("top");
//     top->trace(tfp, 0);
//     tfp->open("wave.vcd"); //turn up wave.vcd

     top->rst = 1;

     while(!sc_time_stamp() < 20 && !Verilated::gotFinish()) {
          top->rst = 0;
          top->clk = 0; top->eval();
          top->clk = 1; top->eval();

		// tfp->dump(main_time); //dump wave
		main_time++;
        if(ebreak_flag == 1) break;
		else if(ecall_flag == 1) {
			ecall_handle();
		}
      }
     printf("ebreak_falg: %d\n", ebreak_flag);
     top->final();
     // tfp->close();
     delete top;
     return 0;
}

