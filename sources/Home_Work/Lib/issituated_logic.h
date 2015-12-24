#ifndef ISSITUATED_H
#define ISSITUATED_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#ifdef __cplusplus

extern "C" {

#endif


struct poligon{
    int length;
    int width;
    int plot;
    int house1;
    int house2;
};

void menu_issituated();
void issituated();
int calculation(struct poligon, struct poligon, struct poligon);

#ifdef __cplusplus
}
#endif

#endif // ISSITUATED_H
