#include <stdio.h>
#include <stdlib.h>

int seq(int n){
    if(n==0){
        return 1;
    }
    if (n==1){
        return 3;
    }
    if (n%3 ==0){
        return seq(n-1)+seq(n-2)+seq(n-3);
    }
    if (n%3 ==1){
        return 2*seq(n-1);
    }
    return seq(n-1)-5;
}

int main()
{
    printf("%d\n", seq(0));
    printf("%d\n", seq(1));
    printf("%d\n", seq(2));
    printf("%d\n", seq(3));
    printf("%d\n", seq(4));
    printf("%d\n", seq(5));
    printf("%d\n", seq(6));
    return 0;
}
