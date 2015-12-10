#ifndef MULTIPLY_H
#define MULTIPLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#ifdef __cplusplus

extern "C" {

#endif

void menu_multiply();
void multiply();
void consider_element_multiplier(int, int);
void count_terms_second_element_and_add_in_array(int, int);

#ifdef __cplusplus
}
#endif

#endif // MULTIPLY_H
