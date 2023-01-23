#include<iostream>

using namespace std;

int main(){
    int vetor[10];
    int entrada;

    for(int i = 0; i < 10; i++){
        cin >> entrada;

        if(entrada <= 0){
            vetor[i] = 1;
        }else{
            vetor[i] = entrada;
        }
    }

    for(int i = 0; i < size(vetor); i++){
        cout << "X[" << i << "] = " << vetor[i] << endl;
    }
}