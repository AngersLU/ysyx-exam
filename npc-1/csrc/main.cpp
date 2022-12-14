#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vysyx_2022040010_top.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;  //simulation time

int ebreak_flag = 0; //ebreak flag

extern "C" void ebreak() {
     ebreak_flag = 1;
}


double sc_time_stamp() {
     return main_time;
}

int main(int argc,char **argv) {

     Verilated::commandArgs(argc,argv);
     Verilated::traceEverOn(true); //out vcd wave

     VerilatedVcdC* tfp = new VerilatedVcdC(); //out vcd wave

     Vysyx_2022040010_top *top = new Vysyx_2022040010_top("top");
     top->trace(tfp, 0);
     tfp->open("wave.vcd"); //turn up wave.vcd

     top->rst = 1;

      while(!sc_time_stamp() < 20 && !Verilated::gotFinish()) {
          top->rst = 0;
          top->clk = 0; top->eval();
          top->clk = 1; top->eval();

		tfp->dump(main_time); //dump wave
		main_time++;
          if(ebreak_flag == 1) break;
     }
     printf("ebreak_falg: %d\n", ebreak_flag);
     top->final();
     tfp->close();
     delete top;
     return 0;
}

