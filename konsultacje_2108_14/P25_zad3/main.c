#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Employee{
    float salary;
    int experience;
};

int getExperience(struct Employee tab[], int n){
    int indeks =0;
    float diff = fabs(tab[0].salary-5000);
    for(int i=1;i<n;i++){
        float diff2 = fabs(tab[i].salary-5000);
        if (diff2 < diff){
            indeks = i;
        }
        if (diff == diff2 && tab[i].salary > tab[indeks].salary){
            indeks = i;
        }
    }
    return tab[indeks].experience;

}

int main()
{
    struct Employee tab[] =
    {
        {4800, 3},
        {5300, 5},
        {4500, 7},
        {5200, 4}
    };
    printf("%d\n", getExperience(tab, 4));
    return 0;
}
