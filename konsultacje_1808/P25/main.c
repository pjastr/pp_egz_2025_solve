#include <stdio.h>
#include <stdlib.h>

int isLetter(char ch){
    if ('A'<= ch && ch<= 'Z'){
        return 1;
    }
    if ('a'<= ch && ch<= 'z'){
        return 1;
    }
    return 0;
}

void removeLastLetter(char txt[]){
    int i=0;
    int k=-1; // indeks ostatniej litery
    while(txt[i] !=0){
        if (isLetter(txt[i])){
            k=i;
        }
        i++;
    }
    if (k==-1){
        return;
    }
    i=k;
    while(txt[i]!= 0){
        txt[i] = txt[i+1];
        i++;
    }
    txt[i] = 0;
}

int main()
{
    char txt[] = "12xyz#9";
    printf("%s\n", txt);
    removeLastLetter(txt);
    printf("%s\n", txt);
    return 0;
}
