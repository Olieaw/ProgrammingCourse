#include "main.h"
#include "string_book.h"

void string_book()
{
    char *write_string;
    char *keyword;

    keyword = (char*)malloc(100*sizeof(char));
    write_string = (char*)malloc(1000*sizeof(char));    

    FILE *open_file = fopen("string_book.txt" , "r");   //Название книги вводить в столбик
    if (open_file != NULL)
    {
        printf("Print keyword\n");
        gets(keyword);gets(keyword);
        poisk(write_string, keyword, open_file);
        fclose(open_file);
    }
    else
    {
        printf("Error open file\n");
    }

    free(write_string);
    free(keyword);
}
