var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let x, z, soma = 0;
let cont = 0;

x = parseInt(lines[0])

let i = 1;

while(true){
    if(z > x){
        break
    }
    z = parseInt(lines[i])
    i++;
}

for(i = x; soma < z; i++){
    soma += i;
    cont++;
}

console.log(cont);