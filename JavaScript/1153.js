var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

function fat(numero){
    if(numero == 0 || numero == 1){
        return 1;
    }else{
        return fat(numero-1) * numero;
    }
}

let entrada = parseInt(lines[0].split(' '))
let fatorial;

fatorial = fat(entrada)

console.log(fatorial);