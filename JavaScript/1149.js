var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let a = 0, n, soma = 0;

let entrada = lines[0].split(' ');

var numberArray = [];

for(let i in entrada){
    numberArray.push(parseInt(entrada[i]));
}

[a, n] = numberArray.filter(item => item > 0);

for(let j = 0; j <= n - 1; j++){
    soma += parseInt(a + j);
}

console.log(soma);