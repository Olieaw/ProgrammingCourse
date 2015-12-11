#include "main.h"
#include "issituated.h"

void menu_issituated()
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
            issituated();
            menu_issituated();
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
            menu_issituated();
            break;
        }
    }
    else
    {
        system("cls");
        puts("Error. Wrong input data type.\n");
        menu_issituated();
    }
}

void issituated()
{

    poligon plot;
    poligon house1;
    poligon house2;
    printf("Print land x, y:");
    scanf("%d%d", &plot.length, &plot.width);
    printf("Print the coordinates of house 1:");
    scanf("%d%d", &house1.length, &house1.width);
    printf("Print the coordinates of house 2:");
    scanf("%d%d", &house2.length, &house2.width);

    if (calculation(plot, house1, house2) == 1)
    {
        printf("There are enough space for who houses\n");
    }
    else
    {
        printf("There are not enough space for who houses\n");
    }
}
