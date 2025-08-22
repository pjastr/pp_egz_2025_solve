#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m, int tab[n][m]){
    if (n != m){
        return;
    }
    for(int i=0;i<n/2;i++){
        // tab[i][i] <-> tab[n-1-i][n-1-i]
        int temp = tab[i][i];
        tab[i][i] = tab[n-1-i][n-1-i];
        tab[n-1-i][n-1-i] = temp;
    }
}

void printTable(int n, int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d][%d]=%d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int tab[3][4] = {{2,3,-3},{1,4,7},{-3,-6,11}};
    printTable(3,4,tab);
    foo(3,4,tab);
    printTable(3,4,tab);
    return 0;
}
