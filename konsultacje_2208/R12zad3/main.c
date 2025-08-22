#include <stdio.h>
#include <stdlib.h>

void mirrorRows(int n, int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            // tab[i][j] <-> tab[i][m-1-j]
            int temp = tab[i][j];
            tab[i][j] = tab[i][m-1-j];
            tab[i][m-1-j] = temp;
        }
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
    int tab[2][4] = {{1,2,3,4},{5,6,7,8}};
    printTable(2,4, tab);
    mirrorRows(2,4,tab);
    printTable(2,4, tab);
    return 0;
}
