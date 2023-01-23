var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');
/*Começa aqui */
let casosTeste;
let numero, contador;

casosTeste = parseInt(lines[0])


for(let i = 1; i <= casosTeste; i++){
    numero = parseInt(lines[i]);
    contador = 0;

    for(let j = 1; j <= numero; j++){
        if(numero % j === 0){
            contador++;
        }
    }
    if(contador === 2){
        console.log(`${numero} eh primo`)
    }else{
        console.log(`${numero} nao eh primo`)
    }
}