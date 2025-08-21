#include <stdio.h>
#include <stdlib.h>

struct elem {
    int x;
    struct elem * next;
};

void printOddValues(struct elem * list){
    struct elem * current = list->next;
    while( current != NULL){
        if (current->x %2 != 0){
            printf("%d\n", current->x);
        }
        current = current->next;
    }
}

int main()
{
    struct elem * list = malloc(sizeof(struct elem));
    list->next = malloc(sizeof(struct elem));
    list->next->x = 7;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->x = 12;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->x = -3;
    list->next->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->next->x = 8;
    list->next->next->next->next->next = NULL;
    printOddValues(list);
    return 0;
}
