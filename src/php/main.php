<?php
//
// Created by cashewnuts on 2021/03/11.
//

const PROGRESS_MAX = 100;

function main()
{
    // main process
    for ($i = 0; $i < PROGRESS_MAX; $i++) {
        // declare progress bar
        $progressBar = str_repeat("=", $i).'>'.str_repeat(' ', PROGRESS_MAX - ($i + 1));

        // output to stderr
        fputs(STDERR, sprintf("\r%s [%d/%d]", $progressBar, $i + 1, PROGRESS_MAX));

        // sleep 10ms
        usleep(10000);
    }

    // end process
    fputs(STDERR, "\n");
}

main();
