var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let soma = 0;
let dividendo = 1, divisor = 1;
let constante = 2;


while(true){
    if(dividendo >= 39){
        break;
    }
    
    soma = soma + (dividendo / (divisor * 1.0));

    dividendo = dividendo + constante;
    divisor = divisor * constante;
}

console.log(soma.toFixed(2))