#include<iostream>

using namespace std;

int main(){
    int entrada, indice = 1;

    while(true){
        cin >> entrada;

        if(entrada == 0){
            break;
        }
        
        for(indice = 1; indice <= entrada; indice++){
            cout << indice;
            if(indice != entrada){
                cout << " ";
            }

        }
        cout << endl;
    }

    return 0;
}