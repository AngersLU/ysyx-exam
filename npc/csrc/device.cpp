#include <time.h>
#include <iostream>
#include <stdio.h>

static uint64_t boot_time = 0;
#define CONFIG_SERIAL_MMIO 0xa00003f8

static uint32_t *rtc_poart_base = NULL;

static uint64_t get_time_internal() {
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}





void init_device() {
    init_map();

    init_serial(); //uart
    init_timer();
}

void init_timer() {
    rtc_poart_base = (uint32_t *)new_space(8);

    add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
}


static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == 0 || offset == 4);
  if (!is_write && offset == 0) {
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;
    rtc_port_base[1] = us >> 32;
  }
}






