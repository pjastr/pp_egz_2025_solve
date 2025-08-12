#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d", &n);

    printf("Podaj a1\n");
    int prev2;
    scanf("%d", &prev2);

    printf("Podaj a2\n");
    int prev;
    scanf("%d", &prev);
    int curr;
    int counter=0;
    int i=3;
    while(i<=n){
        printf("Podaj a%d\n", i);
        scanf("%d", &curr);
        int diff = prev2 - curr;
        if (diff>0 && diff == prev){
            counter++;
        }
        else if (diff<0 && -diff == prev){
            counter++;
        }
        prev2 = prev;
        prev = curr;
        i++;
    }
    printf("licznik %d\n", counter);
    return 0;
}
