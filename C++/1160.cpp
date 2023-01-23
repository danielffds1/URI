#include<iostream>
using namespace std;

int main(){
    int quantidadeCasos;
    int populacaoA, populacaoB;
    double taxaCrescimentoA, taxaCrescimentoB;
    int totalAnos, totalPopulacaoA, totalPopulacaoB;
    cin >> quantidadeCasos;

    for(int i = 0; i < quantidadeCasos; i++){
        cin >> populacaoA >> populacaoB;
        cin >> taxaCrescimentoA >> taxaCrescimentoB;

        totalPopulacaoA = populacaoA;
        totalPopulacaoB = populacaoB;
        totalAnos = 0;

        while(true){
            if(totalPopulacaoA > totalPopulacaoB || totalAnos > 100){
                break;
            }
            totalPopulacaoA += (totalPopulacaoA * (taxaCrescimentoA/100.0));
            totalPopulacaoB += (totalPopulacaoB * (taxaCrescimentoB/100.0));
            totalAnos++;
        }
        if(totalAnos > 100){
            cout << "Mais de 1 seculo." << endl;
        }else{
            cout << totalAnos << " anos." << endl;
        }
    }

    return 0;
}