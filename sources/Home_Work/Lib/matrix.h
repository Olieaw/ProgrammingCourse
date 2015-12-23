#ifndef MATRIX
#define MATRIX

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#ifdef __cplusplus

extern "C" {

#endif

int are_matrixes_transposable(int** matrix1, int** matrix2, int a);
int comparing_transport_areey_main(int**, int**, int);
int comparing_transport_areey_secondary_diagonal(int**, int**, int);

#ifdef __cplusplus
}
#endif

#endif // MATRIX

