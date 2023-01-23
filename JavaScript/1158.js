var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');

let entrada = parseInt(lines[0])
let x, y, valores;
let soma, total = 0;

for(let i = 1; i <= entrada; i++){
    valores = lines[i].split(' ')

    x = parseInt(valores.shift())
    y = parseInt(valores.shift())

    soma = x;
    if(soma % 2 == 0){
        soma = soma + 1;
    }
    total = 0;
    for(let j = 0; j < y; j++){
        total = total + soma;
        soma = soma + 2;
    }
    console.log(total);

}