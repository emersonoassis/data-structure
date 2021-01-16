#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


struct linkedList
{
    int info;
    struct linkedList* next;
};


LinkedList* create_list(){
    return NULL;
}

LinkedList* add(LinkedList* list, int item) {
    LinkedList* new = (LinkedList*) malloc(sizeof(LinkedList));

    new->info = item;
    new->next = list;
    return new;
}

void print_data(LinkedList* list) {
    LinkedList* aux;

    for(aux = list; aux != NULL; aux = aux->next) {
        printf("%d\n", aux->info);
    }
    return;
}

int is_empty(LinkedList* list) {
    if(list == NULL) {
        return 0;
    }

    return -1;
}

LinkedList* search(LinkedList* list, int value) {

    LinkedList* p;

    for(p = list; p != NULL; p = p->next) {
        if(p->info == value) {
            return p;
        }

        return NULL;
    }

}

LinkedList* remove_item(LinkedList* list, int value) {

    LinkedList* prev = NULL;
    LinkedList* p;

    for(p = list; p->info != value; p = p->next) {

        if(p == NULL) {
            return list;
        }

        prev = p;
    }

    if(prev == NULL) {
        list = p->next;
    } else {
        prev->next = p->next;
    }

    free(p);

    return list;

}