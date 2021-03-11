//
// Created by cashewnuts on 2021/03/11.
//

#include <iostream>
#include <string>
#include <thread>

#define PROGRESS_MAX 100

// milliseconds asleep macro
#define M_SLEEP(t) std::this_thread::sleep_for(std::chrono::milliseconds(t))

int main() {
    // declare string variable and fill the empty string with spaces to 99 from 0
    std::string progress_bar = '>' + std::string(PROGRESS_MAX - 1, ' ');

    // main routine
    for (int i = 0; i < PROGRESS_MAX; i++) {
        char percent[10];
        sprintf(percent, "[%d/%d]", i + 1, PROGRESS_MAX);

        std::cerr << "\r" << progress_bar << percent;

        progress_bar.replace(i, 2, "=>");

        M_SLEEP(10);
    }
    std::cerr << std::endl;

    return 0;
}