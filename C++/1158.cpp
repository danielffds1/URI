#include<iostream>
using namespace std;

int main(){

    int entrada;
    int x, y;
    int soma, total = 0;

    cin >> entrada;

    for(int i = 0; i < entrada; i++){
        cin >> x >> y;
        soma = x;
        total = 0;
        if(soma % 2 == 0){
            soma = soma + 1;
        }
        for(int j = 0; j < y; j++){
            total = total + soma;
            soma = soma + 2;
        }
        cout << total << endl;
    }

    return 0;
}