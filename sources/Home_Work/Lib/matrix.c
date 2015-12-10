#include "matrix.h"

int matrix()
{
    int **matrix1, **matrix2;
    int a, *check_areey_main, *check_areey_secondary_diagonal;
    printf("Print arrey size: a:\n");
    scanf("%d", &a);
    printf("Print %d errey elements:\n", a * a);
    int i, j;
    // Первая матрица
    matrix1 = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
        {
        matrix1[i] = (int*)malloc(a*sizeof(int));
        }
    FILE *file_matrix1 = fopen ("matrix1.txt", "r");
    if(!file_matrix1)
    {
        printf("Eror open file\n");
        printf("Enter matrix 1\n");
        for(i = 0; i < a; i++)
            for(j = 0; j < a; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                fscanf(file_matrix1, "%d ", matrix1[i][j]);
            }
            fscanf(file_matrix1, "\n");
        }
        fclose(file_matrix1);
    }
    printf("\n\n");
    for(i = 0; i < a; i++)
    {
       for(j = 0; j < a; j++)
       {
            printf("%d ",matrix1[i][j]);
       }
       printf("\n\n");
    }
    // Вторая матрица
    matrix2 = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
        {
        matrix2[i] = (int*)malloc(a*sizeof(int));
        }
    FILE *file_matrix2 = fopen ("matrix2.txt", "r");
    if(!file_matrix2)
    {
        printf("Eror open file\n");
        printf("Enter matrix 2\n");
        for(i = 0; i < a; i++)
            for(j = 0; j < a; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                fscanf(file_matrix2, "%d ", matrix2[i][j]);
            }
            fscanf(file_matrix2, "\n");
        }
        fclose(file_matrix2);
    }
    printf("\n\n");
    for(i = 0; i < a; i++)
    {
       for(j = 0; j < a; j++)
       {
            printf("%d ",matrix2[i][j]);
       }
       printf("\n\n");
    }

    printf("\n\n");
    transport_areey_main(matrix1, a);
    printf("\n\n");
    comparing_transport_areey_main(matrix1, matrix2, a);
    return_areey(matrix1, a);
    printf("\n\n");
    transport_areey_secondary_diagonal(matrix1, a);
    comparing_transport_areey_secondary_diagonal(matrix1, matrix2, a);
    enter_result(check_areey_main, check_areey_secondary_diagonal);
}

void transport_areey_main(int **matrix1, int a)
{
    int copy , i , j;
    int b = 0;
    for (i = 0; i < a; i++)
    {
        b++;
        for(j = 0; j < b; j++)
        {
            copy = matrix1[i][j];
            matrix1[i][j] = matrix1[j][i];
            matrix1[j][i] = copy;
        }
    }

    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n\n");
    }
}

int comparing_transport_areey_main(int **matrix1, int **matrix2, int a)
{
    int i, j, *check_areey_main = 1;
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            if((matrix1[i][j] == matrix2[i][j]) && (check_areey_main == 1))
            {
                check_areey_main = 1;
            }
            else
            {
                check_areey_main = 0;
            }
        }
    }
    printf("Q = %d\n", check_areey_main);
    return(check_areey_main);
}

void return_areey(int **matrix1, int a)
{
    int copy , i , j;
    int b = 0;
    for (i = 0; i < a; i++)
    {
        b++;
        for(j = 0; j < b; j++)
        {
            copy = matrix1[i][j];
            matrix1[i][j] = matrix1[j][i];
            matrix1[j][i] = copy;
        }
    }

    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n\n");
    }
}

void transport_areey_secondary_diagonal(int **matrix1, int a)
{
    int i, j, copy;
    int b = a;
    for (i = 0; i < a - 1; i++)
    {
        b--;
        for(j = 0; j < b; j++)
        {
            copy = matrix1[i][j];
            matrix1[i][j] = matrix1[a-j-1][a-i-1];
            matrix1[a-j-1][a-i-1] = copy;
        }
    }

    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n\n");
    }
}

int comparing_transport_areey_secondary_diagonal(int**matrix1, int**matrix2, int  a)
{
    int i, j, *check_areey_secondary_diagonal;
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            if((matrix1[i][j] == matrix2[i][j]) && (check_areey_secondary_diagonal == 1))
            {
                check_areey_secondary_diagonal = 1;
            }
            else
            {
                check_areey_secondary_diagonal = 0;
            }
        }
    }
    printf("Q = %d\n", check_areey_secondary_diagonal);
    return(check_areey_secondary_diagonal);
}

void enter_result(int check_areey_main, int check_areey_secondary_diagonal)
{
    if((check_areey_main == 1) || (check_areey_secondary_diagonal == 1))
    {
        printf("Matrix transported\n");
    }
    else
    {
        printf("Matrix is not transported");
    }
}



