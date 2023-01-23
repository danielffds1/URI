var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
/*Começa aqui */
let casosTeste;
let numero, soma;

casosTeste = parseInt(lines[0])


for(let i = 1; i <= casosTeste; i++){
    numero = parseInt(lines[i]);
    soma = 0;
    for(let j = 1; j < numero; j++){
        if(numero % j == 0){
            soma += j;
        }
    }
    if(numero === soma){
        console.log(`${numero} eh perfeito`)
    }else{
        console.log(`${numero} nao eh perfeito`)
    }
}