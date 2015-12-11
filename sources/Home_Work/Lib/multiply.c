#include "multiply.h"

void multiply()
{
    int multiplier1, multiplier2;
    printf("Enter first multiplier:\n");
    scanf("%d", &multiplier1);
    printf("Enter second multiplier:\n");
    scanf("%d", &multiplier2);
    consider_element_multiplier(multiplier1, multiplier2);
    count_terms_second_element_and_add_in_array(multiplier1, multiplier2);
}

void consider_element_multiplier(int multiplier1, int multiplier2)
{
    int consider, consider_copy;
    int spase_consider = 0;
    consider_copy = consider = multiplier1 * multiplier2;

    while (consider_copy > 0)
    {
        consider_copy = consider_copy / 10;
        spase_consider++;
    }
    printf("%d\n", consider);
    printf("%d\n", spase_consider);
}

/// И это тоже лично обсудим, так это многословно...
void count_terms_second_element_and_add_in_array(int multiplier1, int multiplier2)
{
    int spase_multiplier2, i;
    int digit[10];
    int element[10];
    int spase_element[10];
    int copy_multiplier2 = multiplier2;
    while (multiplier2 > 0)
    {
        multiplier2 = multiplier2 / 10;
        spase_multiplier2++;
    }
    printf("%d\n", spase_multiplier2);

    for(i = 1; i <= spase_multiplier2; i++)
    {
        digit[spase_multiplier2 - i] = copy_multiplier2 % 10;
        copy_multiplier2 = copy_multiplier2 / 10;
    }

    for(i = 0; i < spase_multiplier2; i++)
    {
        printf("%d ", digit[i]);
    }
    printf("\n");

    for(i = 0; i <= spase_multiplier2; i++)
    {
        element[spase_multiplier2 - i] = multiplier1 *digit[spase_multiplier2 - i];
    }

    for(i = 0; i < spase_multiplier2; i++)
    {
        printf("%d ", element[i]);
    }
    printf("\n");

    for(i = 0; i < spase_multiplier2; i++)
    {
        spase_element[i] = 0;
        while(element[i] != 0)
        {
            element[i] = element[i] / 10;
            spase_element[i]++;
        }
    }

    for(i = 0; i < spase_multiplier2; i++)
    {
    printf("%d ", spase_element[i]);
    }
    printf("\n");
}
