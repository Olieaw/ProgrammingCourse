#include "main.h"
#include "string_book.h"

void string_book()
{
    char *write_string;
    char *keyword;

    write_string = (char*)malloc(1000*sizeof(char));    
    keyword = (char*)malloc(100*sizeof(char));

    file(write_string, keyword);

    free(write_string);
    free(keyword);
}

void file(char *write_string, char *keyword)
{
    FILE *open_file = fopen("string_book.txt" , "r");   //Название книги вводить в столбик
    if (open_file == NULL)
    {
        printf("Error open file\n");
    }
    else
    {
        printf("Print keyword\n");

        gets(keyword);
        gets(keyword);

        poisk(write_string, keyword, open_file);
        fclose(open_file);
    }
}

