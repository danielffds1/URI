#include <iostream>

using namespace std;

int main(){
    int entrada, b, c, d, e, f;

    cin >> entrada;

    for(b = 1; b <= entrada; b++){
        c = b * b;
        d = b * b * b;

        cout << b << " " << c << " " << d << endl;

        e = c + 1;
        f = d + 1;

        cout << b << " " << e << " " << f << endl;
    }

    return 0;
}