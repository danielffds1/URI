var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
/*Começa aqui */
let vetor = [];
let entrada;

for(let i = 0; i < 13; i++){
    entrada = parseFloat(lines[i]);

    vetor[i] = entrada;

    if(entrada <= 10){
        console.log(`A[${i}] = ${vetor[i].toFixed(1)}`)
    }
}