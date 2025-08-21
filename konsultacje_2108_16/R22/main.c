#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

int maksimum(struct node * list){
    if (list == NULL){
        return 0;
    }
    int temp = list->a;
    struct node * current = list->next;
    while(current != NULL){
        if (current->a > temp){
            temp = current->a;
        }
        current = current->next;
    }
    return temp;
}

int maxElement(struct node * list1, struct node * list2){
    if( maksimum(list1) >  maksimum(list2)){
        return 1;
    }
    return 0;
}

int main()
{
    struct node * list1 = NULL;
    printf("maks list1 %d\n", maksimum(list1));
    struct node * list2 = malloc(sizeof(struct node));
    list2->a = -5;
    list2->next = malloc(sizeof(struct node));
    list2->next->a = -7;
    list2->next->next =  NULL;
    printf("maks list2 %d\n", maksimum(list2));
    printf("wynik %d\n", maxElement(list2, list1));
    return 0;
}
