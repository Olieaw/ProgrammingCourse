#include "main.h"
#include "string_book.h"

void menu_string_book()
{
    int way;
    printf("1.Enter the number\n");
    puts("9.Back to main menu");
    printf("0.Exit\n");
    printf(">>> ");

    if (scanf("%d", &way) == 1)
    {
        switch (way)
        {
        case 1:
            system("cls");
            string_book();
            menu_string_book();
            break;
        case 9:
            system("cls");
            menu();
            break;
        case 0:
            system("cls");
            break;
        default:
            system("cls");
            puts("Error. There's no such option.\n");
            menu_string_book();
            break;
        }
    }
    else
    {
        system("cls");
        puts("Error. Wrong input data type.\n");
        menu_string_book();
    }
}

void string_book()
{
    char *write_string;
    write_string = (char*)malloc(1000*sizeof(char));
    char *keyword;
    keyword = (char*)malloc(100*sizeof(char));
    file(write_string, keyword);
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
        gets(keyword);  // У меня gets не хочет читать с первого раза(не знаю почему)

        poisk(write_string, keyword, open_file);
        fclose(open_file);
    }
}

