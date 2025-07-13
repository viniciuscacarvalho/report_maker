#include "call_backs.h"

call_back_t task_array[TASK_ARRAY_MAX_LEN] = {
    make_title,
    make_index,
    make_image,
    make_table,
    make_bibliography
};

void* make_title (void)
{
    printf("Making Title\n");
}
void* make_index (void)
{
    printf("Making Index\n");
}
void* make_image (void)
{
    printf("Making Image\n");
}
void* make_table (void)
{
    printf("Making Table\n");
}
void* make_bibliography (void)
{
    printf("Making Bibliography\n");
}