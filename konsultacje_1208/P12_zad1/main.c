#include <stdio.h>
#include <stdlib.h>

int sumaCyfr(int n){
    int suma=0;
    while(n>0){
        suma += n%10;
        n = n/10;
    }
    return suma;
}

int isHarshad(int n){
    if (n% sumaCyfr(n) == 0){
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", sumaCyfr(3405));
    printf("%d\n", isHarshad(12));
    printf("%d\n", isHarshad(18));
    printf("%d\n", isHarshad(11));
    return 0;
}
