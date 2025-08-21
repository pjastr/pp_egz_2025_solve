#include <stdio.h>
#include <stdlib.h>

struct Employee{
    char surname[35];
    double salary;
};

struct Employee initEmployee(char surname2[], double salary2){
    struct Employee temp;
    int i;
    for(i=0;surname2[i] !=0;i++){
        temp.surname[i] = surname2[i];
    }
    temp.surname[i] = 0;
    temp.salary = salary2;
    return temp;
}

void showEmployee(struct Employee arg){
    printf("%s %lf\n", arg.surname, arg.salary);
}

int main()
{
    struct Employee e1 = initEmployee("Nowak", 6000.56);
    showEmployee(e1);
    return 0;
}
