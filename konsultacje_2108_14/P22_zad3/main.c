#include <stdio.h>
#include <stdlib.h>

struct Book{
    int pages;
    float rating;
};

int getPages(struct Book tab[], int size)
{
    int najwieksza = tab[0].pages;

    int indeks =0;

    for(int i = 1; i < size; i++)
    {
        if(tab[indeks].rating >= tab[i].rating)
        {
            najwieksza = tab[i].pages;
        }
    }
    return najwieksza;
}



int main()
{

    struct Book ksiazki[4] = {{350, 4.2f}, {200, 3.5f}, {450, 3.5f}, {280, 4.8f}};

    int result = getPages(ksiazki, 4);

    printf("%d\n", result);

    return 0;
}
