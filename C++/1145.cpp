#include <iostream>

using namespace std;

int main(){
    
    int limiteLinha, limiteColuna;
    
    cin >> limiteLinha;
    cin >> limiteColuna;
    
    int n = 1;
    
    for(int i = 1; i <= limiteColuna; i++){
            if(n == limiteLinha) {
                 cout << i << "\n";
                 n = 1;
            }
            else{
            cout << i << " ";
            n++;
            }
    }
    return 0;
}