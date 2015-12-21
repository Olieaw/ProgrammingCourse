#ifndef STRING
#define STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#ifdef __cplusplus

extern "C" {

#endif

void menu_string_book();
void string_book();
void poisk(char*, char*, FILE*);
void file(char*, char*);
int print_book(char*, char*);

#ifdef __cplusplus
}
#endif


#endif // STRING

