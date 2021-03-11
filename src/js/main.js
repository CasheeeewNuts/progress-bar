const PROGRESS_MAX = 100

const main = () => {
    let progressBar = '>' + Array(PROGRESS_MAX - 1).fill(' ').join('')

    let i = 0
    const timer = setInterval(() => {
        if (i >= PROGRESS_MAX) {
            clearInterval(timer)
            process.stderr.write('\n')
            return
        }

        process.stderr.write(`\r${progressBar} [${i + 1}/100]`)

        progressBar = progressBar.replace(/> /, '=>')
        i++
    }, 10)

}

main()