#include <stdio.h>
#include <stdlib.h>

struct elem {
    int a;
    struct elem * next;
};

struct elem * duplicateFirst(struct elem * list){
    // pusta lista
    if (list == NULL){
        return NULL;
    }
    // niepusta lista
    int temp = list->a;
    struct elem * ptr = malloc(sizeof(struct elem));
    ptr->a = temp;
    ptr->next = list;
    return ptr;
}

void printList(struct elem * list){
    struct elem * ptr = list;
    while(ptr != NULL){
        printf("%d %p\n", ptr->a, ptr);
        ptr = ptr->next;
    }
    printf("---\n");
}


int main()
{
    struct elem * list = malloc(sizeof(struct elem));
    list->a = 8;
    list->next = malloc(sizeof(struct elem));
    list->next->a = 4;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->a = 2;
    list->next->next->next = NULL;
    printList(list);
    list = duplicateFirst(list);
    printList(list);
    return 0;
}
