//
// Created by cashewnuts on 2021/03/11.
//

#include <stdio.h>
#include <unistd.h>

#define MAX_LENGTH 255
#define PERCENT_MAX 100

// milliseconds asleep macro
#define M_SLEEP(x) usleep(x * 1000)

int main(void) {
    // declare string var
    char progress_bar[MAX_LENGTH] = {'>'};

    // fill the empty string with spaces to 99 from 0
    for (int i = 1; i < PERCENT_MAX; i++) {
        progress_bar[i] = ' ';
    }

    // main routine
    for (int i = 0; i <= PERCENT_MAX; i += 1) {
        fprintf(stderr, "\r%s [%d/%d]", progress_bar, i, PERCENT_MAX);

        progress_bar[i] = '=';
        progress_bar[i + 1] = '>';

        M_SLEEP(10);
    }
    printf("\n");

    return 0;
}