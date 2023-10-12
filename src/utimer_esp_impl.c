#include <stdio.h>
#include <stdint.h>
#include "esp_timer.h"

int64_t utimer_get_time_ms_impl(void) {
    return esp_timer_get_time() / 1000;
}
