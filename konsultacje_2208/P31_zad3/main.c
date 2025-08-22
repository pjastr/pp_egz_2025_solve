#include <stdio.h>
#include <stdlib.h>

double avgDiagonal(int ** tab, int n){
    double temp =0;
    int counter =0;
    // glowne przekatna
    for(int i=0;i<n;i++){
        temp += tab[i][i];
        counter++;
    }
    // przeciwna przekatna
    for(int i=0;i<n;i++){
        temp += tab[i][n-1-i];
        counter++;
    }
    if (n%2 != 0){
        temp -= tab[n/2][n/2];
        counter--;
    }
    return temp/counter;
}

int main()
{
    int ** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] =  4; tab[0][1] =  1; tab[0][2] =  2;
    tab[1][0] =  3; tab[1][1] =  5; tab[1][2] =  7;
    tab[2][0] =  9; tab[2][1] =  9; tab[2][2] =  6;
    printf("%lf\n", avgDiagonal(tab,3));
    return 0;
}
