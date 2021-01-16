typedef struct linkedList LinkedList;

LinkedList* create_list();
LinkedList* add(LinkedList* list, int item);
void print_data(LinkedList* list);
int is_empty();
LinkedList* search(LinkedList* list, int value);
LinkedList* remove_item(LinkedList* list, int value);