typedef struct linkedList LinkedList;

LinkedList* create_list();
LinkedList* add(LinkedList* list, int item);
void print_chain(LinkedList* list);
void print_item(LinkedList* list);
int is_empty();
LinkedList* search(LinkedList* list, int value);
void remove_item(LinkedList* list, int value);