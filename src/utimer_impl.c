#include <stdio.h>
#include <stdint.h>
#include <sys/time.h>

uint64_t utimer_get_time_ms_impl(void) {
    struct timeval te;
    gettimeofday(&te, NULL); // 获取当前时间
    uint64_t milliseconds = te.tv_sec * 1000LL + te.tv_usec / 1000; // 计算毫秒级时间戳
    return milliseconds;
}
