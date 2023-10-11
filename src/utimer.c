#include "utimer.h"

extern uint64_t utimer_get_time_ms_impl(void);

void utimer_set_timeout(utimer_t *timer, uint64_t timeout_ms)
{
    timer->s_time = utimer_get_time_ms_impl();
    timer->e_time = timer->s_time + timeout_ms;
}

uint64_t utimer_timeout(utimer_t *timer)
{
    volatile uint64_t now = utimer_get_time_ms_impl();
    return (now >= timer->e_time);
}
