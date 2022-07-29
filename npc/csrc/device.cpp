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
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  // uint64_t us = now.tv_usec;
  // putc( now.tv_sec, stderr);
  return us;
}

uint32_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
    // cout<< get_time <<endl;
  return (uint32_t)(now - boot_time);
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







