<?php

const PROGRESS_MAX = 100;

function main()
{
    $progressBar = '>'.implode('', array_map(fn() => ' ', range(0, PROGRESS_MAX - 1)));

    for ($i = 0; $i < PROGRESS_MAX; $i++) {
        fputs(STDERR, sprintf("\r%s [%d/%d]", $progressBar, $i + 1, PROGRESS_MAX));
        $progressBar = preg_replace('/> /', '=>', $progressBar);

        usleep(10000);
    }
    fputs(STDERR, "\n");
}


for ($i = 0; $i < 50; $i++):
    main();
endfor;
