#include <stdio.h>
#include <stdlib.h>

int isDigit(char ch){
    char digits[] = "0123456789";
    for(int i=0; digits[i] !=0;i++){
        if (digits[i] == ch){
            return 1;
        }
    }
    return 0;
}

void removeFirstDigit(char txt[]){
    int i=0; //indeks do odczytu;
    while(txt[i]!= 0){
        if (isDigit(txt[i])){
            break;
        }
        i++;
    }
    while(txt[i]!= 0){
        txt[i] = txt[i+1];
        i++;
    }
    txt[i] = 0;
}

int main()
{
    char txt[] = "ab3c7D";
    printf("%s\n", txt);
    removeFirstDigit(txt);
    printf("%s\n", txt);
    return 0;
}
