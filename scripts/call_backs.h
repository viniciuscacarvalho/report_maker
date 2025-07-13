
#ifndef __CALL_BACKS__
#define __CALL_BACKS__

#include <stdio.h>
#include <stdlib.h>

typedef void* (*call_back_t) (void);

#define TASK_ARRAY_MAX_LEN 16

extern call_back_t task_array[TASK_ARRAY_MAX_LEN];
void  make_init_doc(void);
void  make_end_doc(void);

void* make_title (void);
void* make_index (void);
void* make_image (void);
void* make_table (void);
void* make_section (void);
void* make_chapter (void);
void* make_paragraph (void);
void* make_bibliography (void);

#endif