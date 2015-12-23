int comparing_transport_areey_main(int **matrix1, int **matrix2, int a)
{
    int i , j, result = 1;
    int b = 0;
    for (i = 0; i < a; i++)
    {
        b++;
        for(j = 0; j < b; j++)
        {
            if (matrix1[i][j] != matrix2[j][i])
            {
                result = 0;
            }
        }
    }
    return result;
}

int comparing_transport_areey_secondary_diagonal(int**matrix1, int**matrix2, int  a)
{
    int i, j, result = 1;
    int b = a;
    for (i = 0; i < a - 1; i++)
    {
        b--;
        for(j = 0; j < b; j++)
        {
            if (matrix1[i][j] != matrix2[a-j-1][a-i-1])
            {
                result = 0;
            }
        }
    }
    return result;
}
int are_matrixes_transposable(int** matrix1, int** matrix2, int a)
{
    if (comparing_transport_areey_main(matrix1, matrix2, a) ||
            comparing_transport_areey_secondary_diagonal(matrix1, matrix2, a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}





