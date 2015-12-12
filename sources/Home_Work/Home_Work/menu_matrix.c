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

void matrix()
{
    int **matrix1, **matrix2;
    int i, a, result, check_areey_main, check_areey_secondary_diagonal;
    printf("Print matrix size: a:\n");
    scanf("%d", &a);
    matrix1 = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
    {
        matrix1[i] = (int*)malloc(a*sizeof(int));
    }

    matrix2 = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
    {
        matrix2[i] = (int*)malloc(a*sizeof(int));
    }
    int way;

    printf("How to enter\n");
    printf("1.Manually\n");
    printf("2.Keyboard\n");
    if (scanf("%d", &way) == 1)
    {
        switch (way)
        {
        case 1:;
            enter_manually_matrix1(matrix1, a);
            enter_manually_matrix2(matrix2, a);
            break;
        case 2:
            enter_keyboard(matrix1, matrix2, a);
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

        /// Этот код требует ваших мне устных комментариев,
        /// давайте найдем время обсудить его...
        transport_areey_main(matrix1, a);
        check_areey_main = comparing_transport_areey_main(matrix1, matrix2, a);
        transport_areey_secondary_diagonal(matrix1, a);
        check_areey_secondary_diagonal = comparing_transport_areey_secondary_diagonal(matrix1, matrix2, a);
        result = enter_result(check_areey_main, check_areey_secondary_diagonal);
        if (result == 1)
        {
            printf("Matrix is transported\n");
        }
        else
        {
            printf("Matrix is not transported\n");
        }

        for(i = 0; i < a; i++)
        {
                free(matrix1[i]);
        }

        for(i = 0; i < a; i++)
        {
                free(matrix2[i]);
        }
}

void enter_manually_matrix1(int **matrix1, int a)
{
    int i, j;
    printf("Print %d matrix 1 elements:\n", a * a);
    for(i = 0; i < a; i++)
        for(j = 0; j < a; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    print_matrix1(matrix1, a);
}

void enter_manually_matrix2(int **matrix2, int a)
{
    int i, j;
    printf("Print %d matrix 2 elements:\n", a * a);
    for(i = 0; i < a; i++)
        for(j = 0; j < a; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    print_matrix2(matrix2, a);
}

void enter_keyboard(int **matrix1, int **matrix2, int a)
{
    int i, j;
    // Первая матрица
    FILE *file_matrix1 = fopen ("matrix1.txt", "r");
    if(!file_matrix1)
    {
        printf("Eror open file\n");
        printf("Print %d matrix elements:\n", a * a);
        enter_manually_matrix1(matrix1, a);
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                fscanf(file_matrix1, "%d ", &matrix1[i][j]);
            }
            fscanf(file_matrix1, "\n");
        }
        fclose(file_matrix1);
    }
    printf("Matrix 1\n");
    print_matrix1(matrix1, a);

    // Вторая матрица
    FILE *file_matrix2 = fopen ("matrix2.txt", "r");
    if(!file_matrix2)
    {
        printf("Eror open file\n");
        printf("Print %d matrix elements:\n", a * a);
        enter_manually_matrix2(matrix2, a);
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                fscanf(file_matrix2, "%d ", &matrix2[i][j]);
            }
            fscanf(file_matrix2, "\n");
        }
        fclose(file_matrix2);
    }
    printf("Matrix 2\n");
    print_matrix1(matrix2, a);
}
void print_matrix1(int **matrix1, int a)
{
    int i, j;
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n\n");
    }
}

void print_matrix2(int **matrix2, int a)
{
    int i, j;
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n\n");
    }
}
