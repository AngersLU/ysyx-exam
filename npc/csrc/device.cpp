#include <sys/time.h>
#include <iostream>
#include <cassert>
#include <stdio.h>
using namespace std;

static uint64_t boot_time = 0;

// static uint32_t *rtc_poart_base = NULL;
static uint8_t *serial_base = NULL;
 

static uint64_t get_time_internal() {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec;
  // uint64_t us = now.tv_usec;
  // putc( now.tv_sec, stderr);
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
    // cout<< get_time <<endl;
  return now - boot_time;
}

static void serial_putc(char ch) {
  cout << ch << endl;
}

 void serial_io_output() {
  // *serial_base = 1;
  serial_putc(*serial_base);
  // cout << serial_base[0] << endl;
}

void serial_io_input(uint8_t wdata) {
  putc(wdata, stderr);
  
  // serial_base = (uint8_t *)wdata;

  // printf("%c", *serial_base);

}


// static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
//   assert(offset == 0 || offset == 4);
//   if (!is_write && offset == 0) {
//     uint64_t us = get_time();
//     rtc_port_base[0] = (uint32_t)us;
//     rtc_port_base[1] = us >> 32;
//   }
// }






