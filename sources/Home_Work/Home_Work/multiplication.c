#include "main.h"
#include "multiply.h"

void multiply()
{
    int multiplier1, multiplier2;
    printf("Enter first multiplier:\n");
    scanf("%d", &multiplier1);
    printf("Enter second multiplier:\n");
    scanf("%d", &multiplier2);
    consider_element_multiplier(multiplier1, multiplier2);
}
