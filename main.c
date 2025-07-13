#include "scripts/linked_array.h"

int main () 
{
    int value = 1;
    while (value != 0)
    {
        linked_array_t next_to_store;

        printf ("Pick an option\n");

        scanf("%d",&next_to_store.index_value);
        value = next_to_store.index_value;
        printf ("Option:%d\n",next_to_store.index_value);
        add_to_array(&next_to_store);
    }
    execute_array_tasks();
    free_array();
}