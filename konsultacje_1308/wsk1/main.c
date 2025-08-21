#include <stdio.h>
#include <stdlib.h>

void foo(int x, int y){
    x++;
    y--;
    printf(" w srodku %d %d\n", x, y);
}

int main()
{
    int x=20, y =15;
    printf("%d %d\n", x, y);
    foo(x,y);
    printf("%d %d\n", x, y);
    return 0;
}
