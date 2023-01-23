var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
/*Começa aqui */
let vetor = [];
let entrada;

for(let i = 0; i < 20; i++){
    entrada = parseFloat(lines[i]);
    vetor[i] = entrada;
}

vetor = vetor.slice(0).reverse();

vetor.forEach(function(number, index){
    console.log(`N[${index}] = ${number}`)
})