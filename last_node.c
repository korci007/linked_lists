#include <stdio.h>
#include <stdlib.h>
#include "list_utils.h"

int main(int argc, char **argv){
    struct node *list = NULL;

    if (argc < 2) {
        printf("Usage: linked_lists int_value1 int_value2 ...\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 1; i < argc; i++) {
        int number = atoi(argv[i]); // no error checking yet
        list = insert_node(list, number);
    }

    printf("\n");
    printf("The number of nodes used: %zu\n", num_nodes(list));
    print_list(list);

    int value = 3;
    struct node *last = find_last(list, value);
    printf("The address of the last %d value in the list is: %p\n", value, (void *)last);    

    delete_all(list);
    return EXIT_SUCCESS;
}
