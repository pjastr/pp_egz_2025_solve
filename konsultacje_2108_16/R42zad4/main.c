#include <stdio.h>
#include <stdlib.h>

struct elem {
    int x;
    struct elem * next;
};

void printAddEven(struct elem * list){
    struct elem * current = list->next;
    while(current != NULL){
        if (current->x %2 == 0){
            printf("%p\n", current);
        }
        current = current->next;
    }
}

void printList(struct elem * list){
    struct elem * current = list->next;
    while(current != NULL){
        printf("%p %d\n", current, current->x);
        current = current->next;
    }
    printf("---\n");
}

int main()
{
    struct elem * list = malloc(sizeof(struct elem));
    list->next = malloc(sizeof(struct elem));
    list->next->x = 63;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->x = 7;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->x = 23;
    list->next->next->next->next = NULL;
    printList(list);
    printAddEven(list);
    return 0;
}
