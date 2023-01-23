#include<iostream>

using namespace std;

int main(){
    int entrada;
    int soma, total = 0;
    while(true){
        cin >> entrada;
        total = 0;
        soma = entrada;
        if(entrada == 0){
            break;
        }
        if(entrada % 2 != 0){
            soma = soma + 1;
        }
        for(int i = 0; i < 5; i++){
            total = total + soma;
            soma = soma + 2;
        }
        cout << total << endl;
    }

    return 0;
}