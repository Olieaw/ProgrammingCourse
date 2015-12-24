#include "investition_logic.h"
#include "issituated_logic.h"
#include "multiply_logic.h"
#include "matrix_logic.h"
#include "string_book.h"
#include "main.h"

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
            input();
            break;
        case 2:
            system("cls");
            issituated();
            break;
        case 3:
            system("cls");
            multiply();
            break;
        case 4:
            system("cls");
            matrix();
            break;
        case 5:
            system("cls");
            string_book();
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

