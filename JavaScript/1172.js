var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
/*Começa aqui */
let vetor = [];

for(let i = 0; i < 10; i++){
    
    if(parseInt(lines[i]) <= 0){
        vetor[i] = 1;
    }else{
        vetor[i] = parseInt(lines[i])
    }
}

vetor.forEach(function(number, index){
    console.log(`X[${index}] = ${number}`)
})