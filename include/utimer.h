#ifndef _UTIMER_H_
#define _UTIMER_H_

#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint64_t s_time;
    uint64_t e_time;
} utimer_t;

void utimer_set_timeout(utimer_t *timer, uint64_t timeout_ms);
uint64_t utimer_timeout(utimer_t *timer);

#endif // !_UTIMER_H_