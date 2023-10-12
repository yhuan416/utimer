#ifndef _UTIMER_H_
#define _UTIMER_H_

#include <stdio.h>
#include <stdint.h>

typedef struct {
    int64_t s_time; // start time
    int64_t e_time; // end time
} utimer_t;

void utimer_set_timeout(utimer_t *timer, int64_t timeout_ms);
int64_t utimer_timeout(utimer_t *timer);

#endif // !_UTIMER_H_