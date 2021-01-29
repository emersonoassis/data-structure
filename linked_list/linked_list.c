#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


struct linkedList
{
    int data;
    struct linkedList* next;
};


LinkedList* create_list(){
    return NULL;
}

LinkedList* add(LinkedList* list, int item) {
    LinkedList* new = (LinkedList*) malloc(sizeof(LinkedList));

    new->data = item;
    new->next = list;
    return new;
}

void print_chain(LinkedList* list) {
    LinkedList* aux;

    for(aux = list; aux != NULL; aux = aux->next) {
        printf("%d - %p\n", aux->data, aux->next);
    }
    return;
}

void print_item(LinkedList* list) {
     printf("%d - %p\n", list->data, list->next);
}

int is_empty(LinkedList* list) {
    if(list == NULL) {
        return 0;
    }

    return -1;
}

LinkedList* search(LinkedList* list, int value) {

    if(list == NULL || list->data == value) {
        return list;
    }

    search(list->next, value);

}

void remove_item(LinkedList* list, int value) {

    if(list == NULL) {
        return;
    }

    LinkedList* next_node = list->next;

    if(list->data == value) {
        list->data = next_node->data;
        list->next = next_node->next;
        free(next_node);
        return;
    }

    if(next_node->data == value) {
        list->next = next_node->next;
        free(next_node);
        return ;
    }
    
    remove_item(list->next, value);
    
}