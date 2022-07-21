var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');

let entrada = parseInt(lines[0])

let b, c, d, e, f;

for(b = 1; b <= entrada; b++){
    c = b * b;

    d = b * b * b;

    console.log(`${b} ${c} ${d}`)

    e = c + 1;

    f = d + 1;

    console.log(`${b} ${e} ${f}`)
}