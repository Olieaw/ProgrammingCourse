#ifndef MATRIX
#define MATRIX

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#ifdef __cplusplus

extern "C" {

#endif

void menu_matrix();
void matrix();
void arrey1(int**, int);
void transport_areey_main(int**, int);
void transport_areey_secondary_diagonal(int**, int);
void return_areey(int**, int);
int comparing_transport_areey_main(int**, int**, int);
int comparing_transport_areey_secondary_diagonal(int**, int**, int);
int enter_result(int, int);
void enter_manually_matrix1(int**, int);
void enter_manually_matrix2(int**, int);
void enter_keyboard(int**, int**, int);
void print_matrix1(int**, int);
void print_matrix2(int**, int);

#ifdef __cplusplus
}
#endif

#endif // MATRIX

