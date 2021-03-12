//
// Created by cashewnuts on 2021/03/11.
//

const PROGRESS_MAX = 100

const main = () => {
    let i = 0
    const timer = setInterval(() => {
        if (i >= PROGRESS_MAX) {
            clearInterval(timer)
            process.stderr.write('\n')
            return
        }

        const progressBar = '='.repeat(i) + '>' + ' '.repeat(PROGRESS_MAX - (i + 1))

        process.stderr.write(`\r${progressBar} [${i + 1}/100]`)

        i++
    }, 10)

}

main()