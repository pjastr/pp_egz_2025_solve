#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if (n==1){
        return 1;
    }
    return n* factorial(n-1);
}

int* allocateFactorials(int n){
    int * pointer = malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        pointer[i] = factorial(i+1);
    }
    return pointer;
}

int main()
{
    //printf("%d\n", factorial(5));
    int * result = allocateFactorials(6);
    for(int i=0;i<6;i++){
        printf("%d\n", result[i]);
    }
    return 0;
}
