#include<iostream>

using namespace std;

int main(){
    int casosTeste;
    int numero, soma = 0;
    cin >> casosTeste;

    for(int i = 0; i < casosTeste; i++){
        soma = 0;
        cin >> numero;

        for(int j = 1; j < numero; j++){
            if(numero % j == 0){
                soma = soma + j;
            }
        }
        if(numero == soma){
            cout << numero << " eh perfeito" << endl;
        }else{
            cout << numero << " nao eh perfeito" << endl;
        }
    }

    return 0;
}