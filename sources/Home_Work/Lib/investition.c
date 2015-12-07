#include "investition.h"

void input()
{
    float sum, percent;
    int year;
    float investition_sum(int year, float sum, float percent);

    printf("Enter sum\n");
    scanf("%f", &sum);
    printf("Enter interest\n");
    scanf("%f", &percent);

    printf("Your amount in 5 years:  %f\n", investition_sum(year, sum, percent));
}

/// Лучше использовать double, float имеет значительно меньшую точность и незначительно (в нашем случае) меньший размер
float investition_sum(int year, float sum, float percent)
{
    for(year = 0; year <= 4; year++)
    {
        sum = sum + (sum * (percent / 100));
    }
    return(sum);
}

