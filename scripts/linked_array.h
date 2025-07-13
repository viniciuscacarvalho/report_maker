
#ifndef __LINKED_ARRAYS__
#define __LINKED_ARRAYS__

#include <stdio.h>
#include <stdlib.h>
#include "call_backs.h"

typedef struct linked_array_s linked_array_t;

struct linked_array_s {
    linked_array_t* next_task;
    int index_value;
    call_back_t task;
};

int add_to_array (linked_array_t* next_in_line);
int execute_array_tasks (void);
int free_array(void);

#endif