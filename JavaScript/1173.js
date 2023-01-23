var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
/*Começa aqui */
let vetor = [];
let entrada = parseInt(lines[0]);
let valor;

valor = entrada;

for(let i = 0; i < 10; i++){
    vetor[i] = valor;
    valor *= 2;
    console.log(`N[${i}] = ${vetor[i]}`)
}