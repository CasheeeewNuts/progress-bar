#
# Created by cashewnuts on 2021/03/11.
#

import sys
import time


def main():
    PROGRESS_MAX = 100

    for i in range(0, PROGRESS_MAX):
        # declare progress bar
        progress_bar = '=' * i + '>' + ' ' * (PROGRESS_MAX - (i + 1))

        # output to stderr
        print("\r{} [{}/{}]".format(progress_bar, i + 1, PROGRESS_MAX), file=sys.stderr, end='')

        # sleep 10ms
        time.sleep(0.01)

    print(file=sys.stderr)

if __name__ == '__main__':
    main()
