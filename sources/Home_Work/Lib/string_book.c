#include "string_book.h"

void poisk(char *write_string, char *keyword, FILE *open_file)
{

    char *first_occurrence_of_write_string, str = 0;
    first_occurrence_of_write_string = 0;
    while (fgets(write_string, 100, open_file) && first_occurrence_of_write_string == 0)
    {
        first_occurrence_of_write_string = strstr (write_string, keyword);
        str++;
        if (first_occurrence_of_write_string != 0)
        {
            first_occurrence_of_write_string = print_book(write_string, first_occurrence_of_write_string);
        }
    }
}

int print_book(char *write_string, char *first_occurrence_of_write_string)
{
    puts(write_string);
    first_occurrence_of_write_string = 0;
    return (first_occurrence_of_write_string);
}
