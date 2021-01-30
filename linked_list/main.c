#include <stdio.h>
#include "linked_list.h"


void print_list_status(LinkedList* list);


int main() {
    LinkedList* list;

    list = create_list();

    list = add(list, 50);
    list = add(list, 40);
    list = add(list, 30);
    list = add(list, 20);
    list = add(list, 10);

    print_chain(list);

    list = remove_item(list, 12);

    print_chain(list);

    return 0;
}


void print_list_status(LinkedList* list) {
    if(is_empty(list) == 0) {
        printf("Lista vazia!\n");
    } else {
        printf("Lista n vazia!\n");
    }
}