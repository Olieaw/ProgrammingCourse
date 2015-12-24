#ifndef MULTIPLY_H
#define MULTIPLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string_book.h>
#include <malloc.h>

#ifdef __cplusplus

extern "C" {

#endif

void menu_multiply();
void multiply();
void consider_element_multiplier(int, int);
void count_data(int, int, int,int);
void print_multiplier(int, int, int, int, int, int, int, int);
void print_spase1(int, int);
void print_spase2(int, int);
void print_equal_symbol(int);

#ifdef __cplusplus
}
#endif

#endif // MULTIPLY_H
