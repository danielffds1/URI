#include<iostream>

using namespace std;

int main(){
    int x, z, soma = 0;
    int cont = 0, i;

    cin >> x;

    while(true){
        cin >> z;

        if(z > x){
            break;
        }
    }

    for(i = x; soma < z; i++){
        soma += i;
        cont++;
    }
    
    cout << cont << endl;

    return 0;
}