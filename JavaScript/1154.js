var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let soma = 0, media;
let i = 0, idades;

while(true){
    idades = parseInt(lines[i]);
    if(idades < 0){
        break;
    }

    soma += idades;
    i++;
}
media = parseFloat(soma / i);

console.log(media.toFixed(2))