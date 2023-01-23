#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int constante = 2;
    double soma = 0;
    double dividendo = 1, divisor = 1;

    while(true){
        if(dividendo >= 39){
            break;
        }

        soma = soma + (dividendo / (1.0 * divisor));

        dividendo += constante;
        divisor *= constante;
    }

    cout << fixed << setprecision(2);
    cout << soma << endl;

    return 0;
}