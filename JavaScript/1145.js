var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');

let entrada = lines[0].split(' ')
let limiteLinha = parseInt(entrada.shift())
let limiteColuna = parseInt(entrada.shift())

let contador = 0
let str = ""
for (i = 1; i < limiteColuna; i++){
    contador += 1
    if (contador == limiteLinha) {
        contador = 0
        str += `${i}\n`
    }else{
        str += `${i} `
    }

}
str += `${limiteColuna}`
console.log(str)
