#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double saida = 0;
    int entrada = 1;

    for(int i = 1; i <= 100; i++){
        saida = saida + entrada/(i * 1.0);
    }

    cout << fixed << setprecision(2);
    cout << saida << endl;

    return 0;
}