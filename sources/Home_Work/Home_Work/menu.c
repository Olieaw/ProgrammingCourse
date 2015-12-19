#include "investition.h"
#include "issituated.h"
#include "multiply.h"
#include "matrix.h"
#include "string_book.h"

int menu()
{
    int way;
    printf("Choose a varint\n");
    printf("1.Bank\n");
    printf("2.Houses\n");
    printf("3.Multiply\n");
    printf("4.Matrix\n");
    printf("5.String\n");
    printf("0.Exit\n");
    printf(">>> ");

    if (scanf("%d", &way) == 1)
    {
        switch(way)
        {
        case 1:
            system("cls");
            menu_investition();
            break;
        case 2:
            system("cls");
            menu_issituated();
            break;
        case 3:
            system("cls");
            menu_multiply();
            break;
        case 4:
            system("cls");
            menu_matrix();
            break;
        case 5:
            system("cls");
            menu_string_book();
            break;
        case 0:
            system("cls");
            break;
        default:
            system("cls");
            puts("\nError.There's no such task.\n");
            menu();
            break;
        }
    }
    else
    {
        puts("Error. Wrong input data type.\n");
        menu();
    }
    return 0;
}

