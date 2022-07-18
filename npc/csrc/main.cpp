// #include <stdlib.h>
// #include <assert.h>
//#include "Vrvcpu.h"
// #include <verilated.h>          
// #include <verilated_vcd_c.h>  
// #include <Vrvcpu__Dpi.h>
// #include "monitor.cpp"
// #include <svdpi.h>

#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <dlfcn.h>
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include <Vtop__Dpi.h>
#include "monitor.cpp"
#include <svdpi.h>

using namespace std;

// TODO:
// AXI OR FSL
// #define AXI_DIFFTEST

Vtop* rvcpu ;
// VerilatedVcdC* tfp;w
VerilatedContext* contextp;

uint64_t start_pc;


uint32_t ifetch(uint64_t addr, int len);
int is_exit_status_bad();


// extern "C" void caceh_check(long long write_data, long long read_data){
//   printf("writedcaceh_data = %llx \n", write_data);
//   printf("readdcaceh_data = %llx \n", read_data);
// }

// extern "C" void caceh_checkteg(const svBitVecVal* write_teg, const svBitVecVal* read_teg){
//   printf("writedcaceh_teg = %lx \n", write_teg);
//   printf("readdcaceh_teg = %lx \n", read_teg);
// }

extern "C" void difftest_dut_csrs(long long mcycle_val, long long mstatus_val, long long mtvec_val, long long mepc_val, long long mcause_val, long long mie_val, long long mip_val, long long mscratch_val){
    cpu.mcycle = mcycle_val;
    cpu.mstatus = mstatus_val;
    cpu.mtvec = mtvec_val;
    cpu.mepc = mepc_val ;
    cpu.mie  = mie_val ;
    cpu.mip  = mip_val ;
    cpu.mscratch = mscratch_val;
    cpu.mcause = mcause_val;
}


extern "C" void difftest_dut_thepc(long long thepc_data){
    cpu.pc = thepc_data  ;
}

extern "C" void difftest_dut_pc(long long pc_data, long long exit_code, svBit endyn, svBit exe){
  name_pc = pc_data;
  difftest_ena = exe;
  if(endyn) {
    npc_state.halt_ret = exit_code;
    npc_state.state = NEMU_END;
    npc_state.halt_pc = pc_data;
  }
}

extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, 
  long long gp, long long tp, long long t0, long long t1, long long t2, 
  long long fp, long long s1, long long a0, long long a1, long long a2, 
  long long a3, long long a4, long long a5, long long a6, long long a7, 
  long long s2, long long s3, long long s4, long long s5, long long s6, 
  long long s7, long long s8, long long s9, long long s10, long long a11, 
  long long t3, long long t4, long long t5, long long t6) {
  cpu.gpr[0] = Z0;
  cpu.gpr[1] = ra;
  cpu.gpr[2] = sp;
  cpu.gpr[3] = gp;
  cpu.gpr[4] = tp;
  cpu.gpr[5] = t0;
  cpu.gpr[6] = t1;
  cpu.gpr[7] = t2;
  cpu.gpr[8] = fp;
  cpu.gpr[9] = s1;
  cpu.gpr[10] = a0;
  cpu.gpr[11] = a1;
  cpu.gpr[12] = a2;
  cpu.gpr[13] = a3;
  cpu.gpr[14] = a4;
  cpu.gpr[15] = a5;
  cpu.gpr[16] = a6;
  cpu.gpr[17] = a7;
  cpu.gpr[18] = s2;
  cpu.gpr[19] = s3;
  cpu.gpr[20] = s4;
  cpu.gpr[21] = s5;
  cpu.gpr[22] = s6;
  cpu.gpr[23] = s7;
  cpu.gpr[24] = s8;
  cpu.gpr[25] = s9;
  cpu.gpr[26] = s10;
  cpu.gpr[27] = a11;
  cpu.gpr[28] = t3;
  cpu.gpr[29] = t4;
  cpu.gpr[30] = t5;
  cpu.gpr[31] = t6;
}

uint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}

int main(int argc , char** argv , char** env) {

  contextp = new VerilatedContext ;
  contextp->commandArgs(argc, argv) ;

  rvcpu = new Vtop(contextp);
  // Verilated::traceEverOn(true) ; //out vcd need
  // tfp = new VerilatedVcdC ; // out vcd need
  // rvcpu->trace(tfp,0) ;
  // tfp->open("build/obj_dir/rvcpu.vcd") ; // open vcd


  init_monitor(argc, argv);
  sdb_mainloop();

  close_npc();
  //is_exit_status_bad();
  return is_exit_status_bad();
}

//close npc function

extern int close_npc() {
  // tfp->close() ;
  delete rvcpu ;
  delete contextp ;
  exit(0) ;
  return 0;
}

int is_exit_status_bad() {
  int good = (npc_state.state == NEMU_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NEMU_QUIT);
  return !good;
}

#ifndef AXI_DIFFTEST
extern void isa_exec_once(int x){

  int delay;
  int loop = x ;

  while (loop) {
    if( main_time > 10 ) rvcpu->rst = 0;

    if( main_time % 10 ) { //%==1 start
      rvcpu->clk = 1; 

      if( !rvcpu->rst ) { //and no rst
        //start run
        if( main_time == 11 ) rvcpu->isram_rdata = ifetch(start_pc, 4);
        rvcpu->eval();

        // TODO: add handshake sign 
        // wait
        if( delay == 1 )//TODO:rvcpu->sram_end = 0; delay = 0; 
          
        
        rvcpu->isram_rdata = ifetch(rvcpu->isram_addr, 4);

        // dsram read
        if( rvcpu->dsram_e && !rvcpu->dsram_we ) {
          delay = 1;
          rvcpu->dsram_rdata = vaddr_read(rvcpu->dsram_addr, 8);
          // rvcpu->sram_end = 1;  //handshark over
        }
        // dsram write
        if( rvcpu->dsram_e && rvcpu->dsram_we ) {
          delay = 1;
          // TODO:rvcpu->sram_end = 1;
          switch ( rvcpu->dsram_sel ) {
            case 1 :  vaddr_write(rvcpu->dsram_addr, 1, rvcpu->dsram_wdata); break;
            case 2 :  vaddr_write(rvcpu->dsram_addr, 2, rvcpu->dsram_wdata); break;
            case 4 :  vaddr_write(rvcpu->dsram_addr, 4, rvcpu->dsram_wdata); break;
            case 8 :  vaddr_write(rvcpu->dsram_addr, 8, rvcpu->dsram_wdata); break;
            default:  break;
          }//switch_end
        }//dsram_write_end
      }//no_rst_end
    }//%==1 exec_once_end 

    if( (main_time % 10) == 5 ) rvcpu->clk = 0;
    else if( (main_time % 10) == 0 ) rvcpu->clk = 0; loop = 0;

    rvcpu->eval();
    // tfp->dump(main_time);
    main_time++;
    //loop_end
  }
  //exe_once_end
}
#else 
extern void isa_exec_once(int y){
int ddy ;
ddy = y;
while(ddy){
  if(main_time > 11) {
    rvcpu->rst = 0 ;
  }
  if((main_time % 10) == 2){
    rvcpu->clk = 1;
    rvcpu->eval();
    if(rvcpu->read_ena_sign_ == 1){
        printf("addraddr : %lx\n",rvcpu->out_addr_outp);
        //printf("work unber = %d \n", main_time/10);
      if(rvcpu->out_addr_outp != 0){

      rvcpu->read_data_sign_ = vaddr_read(rvcpu->out_addr_outp, 8);
      }
    }
    if(rvcpu->out_serial_write_ == 1){
         char flower = (char) rvcpu->out_serial_data_;
        // printf("chufale printf");
         printf("%c", flower);
      
    }
    if(rvcpu->out_rtc_read_ == 1) {
     
      rvcpu->in_rtc_data_ = rtc_io_handler();
      //printf("get_time = %d\n", rvcpu->in_rtc_data_);
    }
  }
  if((main_time % 10) == 6){
    //printf("get_time = %d\n", rvcpu->in_rtc_data_);
  rvcpu->clk = 0;
      if(rvcpu->out_write_ram_ena == 1){
      //if((rvcpu->out_write_ram_addr != 0) && (rvcpu->out_write_ram_addr != 0xa00003f8)){
      //printf("writeaddr : %lx\n", rvcpu->out_write_ram_addr);
      vaddr_write(rvcpu->out_write_ram_addr, 8, rvcpu->out_write_ram_data);
     // }
    }
  }

  if((main_time % 10) == 9){
    rvcpu->clk = 0;
    ddy = 0;
  }

  rvcpu->eval();
  tfp->dump(main_time);
  main_time++;
}
}
#endif
