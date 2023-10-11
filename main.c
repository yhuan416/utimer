#include <stdio.h>
#include <stdint.h>

#include "utimer.h"

utimer_t timer;

void data_update(void) {
    if (utimer_timeout(&timer)) {
        printf("timeout\n");
        utimer_set_timeout(&timer, 2000);
    }

}

int main() {

    utimer_set_timeout(&timer, 2000);

    while (1) {
        data_update();
    }

    printf("timeout\n");
}
