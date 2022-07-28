#include <am.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  static uint64_t boot_time;
  uint64_t lo, hi;
  lo = inl(RTC_ADDR);
  hi = (uint64_t)inl(RTC_ADDR + 4) << 32;
  if (boot_time == 0) boot_time = hi | lo; // 记录启动的时间
  uptime->us = (hi | lo) - boot_time;

}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
