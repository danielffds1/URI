#include <iostream>
using namespace std;


int main()
{
    int a,b;
    int i=0,n=0,s;
    double ga,gb;
    scanf("%d",&n);
    while(n>0){
        scanf("%d%d%lf%lf",&a,&b,&ga,&gb);
        while(b>=a){
        a+=a*ga/100;
        b+=b*gb/100;
        i++;
    }
    if(i>100)
        printf("Mais de 1 seculo.\n");
    else
        printf("%d anos.\n",i);
        n--;
        i=0;
    }
    
    return 0;
}