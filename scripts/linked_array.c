#include "linked_array.h"

linked_array_t* array;

char unsigned array_len = 0;

extern call_back_t task_array[TASK_ARRAY_MAX_LEN];


int init_array (linked_array_t* next_in_line)
{
    array = malloc(sizeof (linked_array_t) * (array_len + 1));
    
    if (!array)
    {
        printf("Malloc Faild\n");
        return 1;
    }

    array[array_len] = *next_in_line;
    array[array_len].next_task = 0;

    //printf("Malloc Successful\n");
}

int add_to_array (linked_array_t* next_in_line)
{
    
    if (!array_len)
        init_array(next_in_line);
    else
    {
        array = realloc(array, sizeof (linked_array_t) * (array_len + 1));

        if (!array)
        {
            printf("Realloc Faild\n");
            return 1;
        }
        //printf("Realloc Successful\n");

        array[array_len] = *next_in_line;
        array[array_len].next_task = 0;
        array[array_len-1].next_task = & (array[array_len]);
    }
    array_len++;
}

int execute_array_tasks (void)
{
    linked_array_t* current_task = array; 
    while(current_task->next_task)
    {
        printf("Option:%d\n", current_task->index_value);
        task_array[(current_task->index_value-1)%TASK_ARRAY_MAX_LEN]();
        current_task = current_task->next_task;
        
    }
}
int free_array(void)
{
    free(array);
}