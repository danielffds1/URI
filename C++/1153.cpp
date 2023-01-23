#include <iostream>

using namespace std;

int fat (int n) {
if ((n==1) || (n==0)) return 1;               
   else
      return fat(n-1)*n;
}
int main(){

    int entrada, fatorial = 1;

    cin >> entrada;

    fatorial = fat(entrada);

    cout << fatorial << endl;
    return 0;
}