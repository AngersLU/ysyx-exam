#include <sys/time.h>
#include <iostream>
#include <cassert>
#include <stdio.h>
using namespace std;

static uint64_t boot_time = 0;

// static uint32_t *rtc_poart_base = NULL;
static uint8_t *serial_base = NULL;
 

static uint64_t get_time_internal() {
  // struct timeval now;
  // gettimeofday(&now, NULL);
  // uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  // uint64_t us = now.tv_usec;
  // putc( now.tv_sec, stderr);
  return us;
}

uint64_t get_time(int offset) {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
    // cout<< get_time <<endl;
  uint64_t us = now - boot_time;
  // uint32_t rtc_port_base0 = (uint32_t)us;
  // uint32_t rtc_port_base1 = us >> 32;

  // switch (offset) {
  // case 0: return rtc_port_base0;
  // case 4: return rtc_port_base1;
  // default: return 0;
  // }
  return 0;
}

static void serial_putc(char ch) {
  cout << ch << endl;
}

 void serial_io_output() {
  // *serial_base = 1;
  serial_putc(*serial_base);
  // cout << serial_base[0] << endl;
}

void serial_io_input(long long wdata) {
  putc((uint8_t)wdata, stderr);
  
  // serial_base = (uint8_t *)wdata;

  // printf("%c", *serial_base);

}







