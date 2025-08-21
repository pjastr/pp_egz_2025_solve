#include <stdio.h>
#include <stdlib.h>

int productSum(int const * a, int const * const b, int *c){
    return (*a)*(*b)+*c;
}

int main()
{
    int x=3, y=4, z=5;
    printf("%d\n", productSum(&x, &y, &z));
    return 0;
}
