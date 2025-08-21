#include <stdio.h>
#include <stdlib.h>

int updateBoth(int * p1, int *p2, int x){
    int temp1 = *p1, temp2 = *p2;
    *p1 += x;
    *p2 -= x;
    if (*p1 <0 || *p2 <0){
        *p1 = temp1;
        *p2 = temp2;
        return 0;
    }
    return 1;
}

int main()
{
    int a=3, b=5, c=6;
    printf("%d %d %d\n", a,b,c);
    printf("%d\n", updateBoth(&a, &b, c));
    printf("%d %d %d\n", a,b,c);
    return 0;
}
