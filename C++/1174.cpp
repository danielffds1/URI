#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float vetor[100];
    float entrada;

    for(int i = 0; i < 13; i++){
        cin >> entrada;
        vetor[i] = (entrada * 1.0);

        cout << fixed << setprecision(1);
        
        if(entrada <= 10){
            cout << "A[" << i << "] = " << vetor[i] << endl;
        }
    }

    return 0;
}