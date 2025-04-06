const readline = require('readline');
const { stdin: input, stdout: output } = require('process');

const rl = readline.createInterface({ input, output });

rl.question('', (input) => {
    const [a, b] = input.split(' ').map(Number);

    console.log(a - b);
    rl.close();
});