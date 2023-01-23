#include<iostream>

using namespace std;

int main(){
    int casosDeTeste;
    int entrada, contador;

    cin >> casosDeTeste;

    for(int i = 1; i <= casosDeTeste; i++){
        cin >> entrada;
        contador = 0;

        for(int j = 1; j <= entrada; j++){
            if(entrada % j == 0){
                contador++;
            }
        }
        if(contador == 2){
            cout << entrada << " eh primo" << endl;
        }else{
            cout << entrada << " nao eh primo" << endl;
        }
    }
    return 0;
}