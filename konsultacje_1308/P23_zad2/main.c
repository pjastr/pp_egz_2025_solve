#include <stdio.h>
#include <stdlib.h>

int * maxPtr(int*p1, int*p2, int*p3){
    if (*p1 >= *p2){
        if (*p1 >= *p3){
            return p1;
        }
        return p3;
    }
    if (*p2 >= *p3){
        return p2;
    }
    return p3;
}

int main()
{
    int x=4, y=17, z=9;
    printf("%d %p\n", x, &x);
    printf("%d %p\n", y, &y);
    printf("%d %p\n", z, &z);
    printf("Wynik %p\n", maxPtr(&x, &y, &z));
    return 0;
}
