#include "multiply.h"

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
    count_terms_second_element_and_add_in_array(multiplier1, multiplier2, spase_consider, consider);
}

/// И это тоже лично обсудим, так это многословно...
void count_terms_second_element_and_add_in_array(int multiplier1, int multiplier2, int spase_consider, int consider)
{
    int spase_multiplier2, spase_multiplier1, i, j;
    int digit[10];
    int element[10];
    int copy_element[10];
    int spase_element[10];
    int copy_multiplier1, copy_multiplier2, copy2_multiplier2;
    copy_multiplier1 = multiplier1;
    copy_multiplier2 = copy2_multiplier2 = multiplier2;

    spase_multiplier1 = spase_mult_1(copy_multiplier1);
    spase_multiplier2 = spase_mult_2(copy_multiplier2);


    //разряды 2-ого множителя
    for(i = 1; i <= spase_multiplier2; i++)
    {
        digit[spase_multiplier2 - i] = copy_multiplier2 % 10;
        copy_multiplier2 = copy_multiplier2 / 10;
    }

    //элементы при умножении 1-ого множителя на разряды
    for(i = 0; i <= spase_multiplier2; i++)
    {
        element[spase_multiplier2 - i] = multiplier1 *digit[spase_multiplier2 - i];
    }

    //копия
    for(i = 0; i < spase_multiplier2; i++)
    {
        copy_element[i] = element[i];
    }

    //подсчёт разрядов в элементе

    for(i = 0; i < spase_multiplier2; i++)
    {
        spase_element[i] = 0;
        while(copy_element[i] != 0)
        {
            copy_element[i] = copy_element[i] / 10;
            spase_element[i]++;
        }
    }


    //печать

    if (spase_multiplier1 >= spase_multiplier2)
    {
        printf(" ");
        print_spase1(spase_consider, spase_multiplier1);
        printf("%d\n", multiplier1);
        printf("x");
        print_spase1(spase_consider, spase_multiplier1);
        for(i = 0; i < spase_multiplier1 - spase_multiplier2; i++)
        {
            printf(" ");
        }
        printf("%d\n", multiplier2);
    }
    else
    {
        printf(" ");
        print_spase2(spase_consider, spase_multiplier2);
        printf("%d\n", multiplier2);
        printf("x");
        print_spase2(spase_consider, spase_multiplier2);
        for(i = 0; i < spase_multiplier2 - spase_multiplier1; i++)
        {
            printf(" ");
        }
        printf("%d\n", multiplier1);
    }
    print_equal_symbol(spase_consider);
    printf("\n");
    for (i = 0; i < spase_multiplier2; i++)
    {
        int num = spase_consider - spase_element[i] - i;
        for (j = 0; j < num + 1; j++)
        {
            printf(" ");
        }
        printf("%d\n", element[i]);
    }   
    print_equal_symbol(spase_consider);
    printf("\n");
    printf(" ");
    printf("%d\n", consider);

}

//пробелы  1-ого множителя
int spase_mult_1(int copy_multiplier1)
{
    int spase_multiplier1 = 0;
    while (copy_multiplier1 > 0)
    {
        copy_multiplier1 = copy_multiplier1 / 10;
        spase_multiplier1++;
    }
    return spase_multiplier1;
}

//пробелы  2-ого множителя
int spase_mult_2(int copy2_multiplier2)
{
    int spase_multiplier2 = 0;
    while (copy2_multiplier2 > 0)
    {
        copy2_multiplier2 = copy2_multiplier2 / 10;
        spase_multiplier2++;
    }
    return spase_multiplier2;
}

void print_spase1(int spase_consider, int spase_multiplier1)
{
    int j;
    int num = spase_consider - spase_multiplier1;
    for (j = 0; j < num; j++)
    {
        printf(" ");
    }
}

void print_spase2(int spase_consider, int spase_multiplier2)
{
    int j;
    int num = spase_consider - spase_multiplier2;
    for (j = 0; j < num; j++)
    {
        printf(" ");
    }
}
void print_equal_symbol(int spase_consider)
{
    int j;
    for(j = 0; j < spase_consider + 1; j++)
    {
        printf("=");
    }
}
