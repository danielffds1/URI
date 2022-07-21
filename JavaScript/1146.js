var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
let entrada, indice;
let i = 0;
let resultado = "";

while(true){
    entrada = parseInt(lines[i]);

    if(entrada === 0){
        break;
    }

    if(i != 0){
        resultado += `\n`;
    }

    for(indice = 1; indice <= entrada; indice++){
        if(indice === entrada){
            resultado += `${indice}`
        }else{
            resultado += `${indice} `
        }
    }
    i++;
}

console.log(`${resultado}`)