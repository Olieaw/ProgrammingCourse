#include "main.h"
#include "matrix.h"

void menu_matrix()
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
            matrix();
            menu_matrix();
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
            menu_matrix();
            break;
        }
    }
    else
    {
        system("cls");
        puts("Error. Wrong input data type.\n");
        menu_matrix();
    }
}
