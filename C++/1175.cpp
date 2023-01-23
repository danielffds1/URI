#include<iostream>

using namespace std;

int main(){

    int vetor[20];
    int entrada, auxiliar;

    for(int i = 0; i < 20; i++){
        cin >> entrada;
        vetor[i] = entrada;
    }

    for(int i = 0, j = 19; i < 10; i++, j--){
        auxiliar = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = auxiliar;
    }

    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}