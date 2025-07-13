#include "call_backs.h"

call_back_t task_array[TASK_ARRAY_MAX_LEN] = {
    make_title,
    make_index,
    make_image,
    make_table,
    make_paragraph,
    make_section,
    make_chapter,
    make_bibliography
};

FILE *final_file;

void make_init_doc(void)
{
    printf("Making Document\n");

    final_file = fopen("output_doc/output.tex", "w");

    if (final_file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    FILE *content_file;
    content_file = fopen("report/init_of_doc.tex", "r");

    char ch;
    while ((ch = fgetc(content_file)) != EOF) {
        fputc(ch, final_file);
    }

    fclose(content_file);
}

void  make_end_doc(void)
{
    FILE *content_file;
    content_file = fopen("report/end_of_doc.tex", "r");

    char ch;
    while ((ch = fgetc(content_file)) != EOF) {
        fputc(ch, final_file);
    }

    fclose(content_file);
    fclose(final_file);
}



void* make_title (void)
{
    printf("Making Title\n");
    
    fprintf(final_file,"\\title{title}\\maketitle\n");
}
void* make_index (void)
{
    printf("Making Index\n");

    fprintf(final_file,"\\makeindex\n");
}

void* make_paragraph (void)
{
    printf("Making Paragraph\n");

    fprintf(final_file,"\\paragraph{Ola}\n");
    
}

void* make_section (void)
{
    printf("Making Section\n");

    fprintf(final_file,"\\section{Ola}\n");
    
}

void* make_chapter (void)
{
    printf("Making Chapter\n");

    fprintf(final_file,"\\chapter{Ola}\n");
    
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

