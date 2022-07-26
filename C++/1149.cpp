#include<iostream>
using namespace std;

int main(){
    int entrada, a = 0, n, soma = 0;

    while(true){
        cin >> entrada;

        if(a == 0){
            if(entrada > 0){
                a = entrada;
            }
        }else{
            if(entrada > 0){
                n = entrada;
                break;
            }
        }
    }

    for(int i = 0; i <= n - 1; i++){
        soma += a + i;
    }

    cout << soma << endl;
    
    return 0;
}