#include <stdio.h>
#include <malloc.h>

/*void arrey1(int **matrix, int a)
{
    int i, j;
    matrix = (int**)malloc(a*sizeof(int*));
    for(i = 0; i<a; i++)
        {
        matrix[i] = (int*)malloc(a*sizeof(int));
        }
    for(i=0; i<a; i++)
        for(j=0; j<a; j++)
        {
        scanf("%d", &matrix[i][j]);
        }
    for(i=0; i<a; i++)
    {
       for(j=0; j<a; j++)
       {
            printf("%d ",matrix[i][j]);
       }
       printf("\n");
    }
}*/

void transport_areey_main(int **matrix, int a)
{
    int copy , i , j;
    int b = 0;
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            copy = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = copy;
            printf("%d ", matrix[i][j]);
            b++;
        }
        printf("\n\n");
    }
}

void transport_areey_secondary_diagonal(int **matrix, int a)
{
    int t, i, j;
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[a-j-1][a-i-1];
            matrix[a-j-1][a-i-1] = t;
        }
        printf("\n\n");
    }
}

int matrix()
{
    int **matrix;
    int a;
    printf("Print arrey size: a:\n");
    scanf("%d", &a);
    printf("Print %d errey elements:\n", a * a);
    int i, j;
    matrix = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
        {
        matrix[i] = (int*)malloc(a*sizeof(int));
        }
    for(i = 0; i < a; i++)
        for(j = 0; j < a; j++)
        {
        scanf("%d", &matrix[i][j]);
        }
    for(i = 0; i < a; i++)
    {
       for(j = 0; j < a; j++)
       {
            printf("%d ",matrix[i][j]);
       }
       printf("\n\n");
    }
    printf("\n\n\n");
    transport_areey_main(matrix, a);
    transport_areey_secondary_diagonal(matrix, a);

}
