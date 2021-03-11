#
# Created by cashewnuts on 2021/03/11.
#

import sys
import time


def main():
    PROGRESS_MAX = 100
    progress_bar = '>' + ' ' * (PROGRESS_MAX - 1)

    for i in range(0, PROGRESS_MAX):
        print("\r{}[{}/{}]".format(progress_bar, i + 1, PROGRESS_MAX), file=sys.stderr, end='')

        progress_bar = progress_bar.replace("> ", "=>", 1)
        time.sleep(0.01)


if __name__ == '__main__':
    main()
