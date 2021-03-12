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
    // declare progress bar string
    char progress_bar[MAX_LENGTH] = {'>'};

    // main routine
    for (int i = 0; i <= PERCENT_MAX; i += 1) {
        fprintf(stderr, "\r%-100s [%d/%d]", progress_bar, i, PERCENT_MAX);

        progress_bar[i] = '=';
        progress_bar[i + 1] = '>';

        M_SLEEP(10);
    }
    printf("\n");

    return 0;
}