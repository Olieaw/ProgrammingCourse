#include "investition.h"

float investition_sum(float sum, float percent)
{
    int year;
    for(year = 0; year <= 4; year++)
    {
        sum = sum + (sum * (percent / 100));
    }
    return(sum);
}

