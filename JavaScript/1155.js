var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var soma = 0, entrada = 1;

for(let i = 1; i <=100; i++){
    soma = soma + entrada / (i * 1.0)
}

console.log(soma.toFixed(2))