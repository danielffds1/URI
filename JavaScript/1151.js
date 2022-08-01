
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


let entrada = parseInt(lines[0].split(' '))

const fibonacci = (n) =>
Array.from({ length: n }).reduce(
  (acc, val, i) => acc.concat(i > 1 ? acc[i - 1] + acc[i - 2] : i),
  []
);

let arra = fibonacci(entrada);

let saida = ""

for(let i = 0; i < arra.length; i++){
  if(i == arra.length - 1){
    saida += `${arra[i]}`
  }else{
    saida += `${arra[i]} `
  }
}

console.log(saida)