#include <stdio.h>
#include <stdlib.h>

struct Product{
    double price;
    int quantity;
};

double getTotal(struct Product tab[], int n){
    double sum =0;
    for(int i=0;i<n;i++){
        sum += tab[i].price * tab[i].quantity;
    }
    return sum;
}

int main()
{
    struct Product tab[] ={
        {10.5, 3},
        {25, 2},
        {5.25, 4}
    };
    printf("%lf\n", getTotal(tab, 3));
    return 0;
}
