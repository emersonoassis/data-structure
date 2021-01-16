#include <stdio.h>
#include "linked_list.h"


void print_list_status(LinkedList* list);


int main() {
    LinkedList* list;

    list = create_list();

    print_list_status(list);

    list = add(list, 10);
    list = add(list, 20);
     
     print_list_status(list);

    //print_data(list);

    return 0;
}


void print_list_status(LinkedList* list) {
    if(is_empty(list) == 0) {
        printf("Lista vazia!\n");
    } else {
        printf("Lista n vazia!\n");
    }
}