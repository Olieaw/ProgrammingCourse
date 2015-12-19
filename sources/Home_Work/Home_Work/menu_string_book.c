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
    int keyword = enter_keyword();
    int write_string = file();
    //comparing_characters(keyword, write_string);
}

int enter_keyword()
{
    char keyword[100];
    int i = 0;
    printf("Print keyword\n");
    gets(keyword);
    while (keyword[i] != 0)
    {
    putchar(keyword[i]);
    printf("\n");
    i++;
    }
    return (keyword);
}

int file()
{
    FILE * open_file = fopen("string_book.txt" , "r");
    char write_string [100];

    if (open_file == NULL)
    {
        printf("Error open file\n");
    }
    else
    {
        fgets(write_string, 100, open_file);
        fclose (open_file);
    }
    return (write_string);
}




