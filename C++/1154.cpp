#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int entrada, soma = 0, i = 0;
    double media = 0.0;

    while(true){
        cin >> entrada;

        if(entrada < 0){
            break;
        }else{
            soma += entrada;
        }

        i++;
    }

    media = soma / (i * 1.0);
    cout << fixed << setprecision(2);
    cout << media << endl;

}