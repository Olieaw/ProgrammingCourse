#include "main.h"
#include "matrix_logic.h"

void matrix()
{
    int a;
    puts("Enter matrix dimension");
    scanf("%d", &a);
    int **matrix1, **matrix2;
    int i, j;
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

    FILE *file_matrix1 = fopen ("matrix1.txt", "r");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            fscanf(file_matrix1, "%d ", &matrix1[i][j]);
        }
        fscanf(file_matrix1, "\n");
    }
    fclose(file_matrix1);

    FILE *file_matrix2 = fopen ("matrix2.txt", "r");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            fscanf(file_matrix2, "%d ", &matrix2[i][j]);
        }
        fscanf(file_matrix2, "\n");
    }
    fclose(file_matrix2);

    if (are_matrixes_transposable(matrix1, matrix2, a))
    {
        puts("YES!!!");
    }
    else
    {
        puts("NO!!!");
    }
    for(i = 0; i < a; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);
}
