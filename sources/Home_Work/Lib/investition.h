#ifndef INVESTITION_H
#define INVESTITION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus

extern "C" {

#endif

void menu_investition();
void input();
float investition_sum(int year, float sum, float percent);

#ifdef __cplusplus
}
#endif

#endif // INVESTITION_H

