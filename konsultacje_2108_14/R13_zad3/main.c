#include <stdio.h>
#include <stdlib.h>

struct Employee{
    char department[40];
    double salary;
};

int length(char txt[]){
    int i=0;
    while(txt[i] !=0){
        i++;
    }
    return i;
}

struct Employee * hireEmployee(char department2[],double salary2){
    if (length(department2)<=1 || salary2 <= 3000){
        return NULL;
    }
    struct Employee * ptr = malloc(sizeof(struct Employee));
    int i;
    for(i=0; department2[i] !=0;i++){
        (ptr->department)[i] = department2[i];
    }
    (ptr->department)[i] = 0;
    ptr->salary = salary2;
    return ptr;
}

void giveRaise(struct Employee * ptr){
    ptr->salary *= 1.1;
}

int main()
{
    struct Employee * result = hireEmployee("H", 6000.23);
    printf("%p\n", result);
    if (result != NULL){
        printf("%s %lf\n", result->department, result->salary);
        giveRaise(result);
        printf("%s %lf\n", result->department, result->salary);
    }
    return 0;
}
