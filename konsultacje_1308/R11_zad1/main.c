#include <stdio.h>
#include <stdlib.h>

void change(int *x){
    *x = (*x) * (*x);
}

int main()
{
    int val1, val2, val3;
    scanf("%d", &val1);
    scanf("%d", &val2);
    scanf("%d", &val3);
    change(&val1);
    change(&val2);
    change(&val3);
    printf("%d %d %d\n", val1, val2, val3);
    return 0;
}
