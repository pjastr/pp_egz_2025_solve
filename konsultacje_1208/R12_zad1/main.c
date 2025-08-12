#include <stdio.h>
#include <stdlib.h>

int sumaDzielnikow(int n){
    int suma=0;
    if (n<0){
        n *=(-1);
    }
    for(int i=1;i<=n;i++){
        if (n%i == 0){
            suma +=i;
        }
    }
    return suma;
}

void sumOfDivisors(int n, int tab[]){
    for(int i=0;i<n;i++){
        tab[i] =  sumaDzielnikow(tab[i]);
    }
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d\n", tab[i]);
    }
    printf("---\n");
}

int main()
{
    int tab[] = {6,-12,1,7,-8};
    printTable(5,tab);
    sumOfDivisors(5, tab);
    printTable(5,tab);
    return 0;
}
