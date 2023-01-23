#include<iostream>

using namespace std;

int main(){

    int vetor[10];
    int entrada, valor;

    cin >> entrada;

    valor = entrada;


    for(int i = 0; i < size(vetor); i++){
        vetor[i] = valor;
        valor *= 2;
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}