#include <stdio.h>
#include <stdlib.h>

void replaceFirstLetter(char txt[]){
    for(int i=0;txt[i] !=0; i++){
        if ('a' <= txt[i] && txt[i] <= 'z'){
            txt[i] -=32;
            break;
        }
    }
}

int main()
{
    char txt[] = "234";
    printf("%s.\n", txt);
    replaceFirstLetter(txt);
    printf("%s.\n", txt);
    return 0;
}
