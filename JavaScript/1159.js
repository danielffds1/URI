var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
let entrada, i = 0;
let total, soma;

while(true){
    entrada = parseInt(lines[i]);
    soma = entrada;
    total = 0;
    if(entrada === 0){
        break;
    }
    if(soma % 2 !=0){
        soma = soma +1;
    }

    for(let j = 0; j < 5; j++){
        total = total + soma;
        soma = soma + 2;
    }

    console.log(total)
    i++;
}