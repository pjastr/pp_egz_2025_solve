#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int suma = 0;
    int k=0;
    while(suma <= n){
        k++;
        suma +=k;
    }
    printf("%d\n", k-1);
    return 0;
}
