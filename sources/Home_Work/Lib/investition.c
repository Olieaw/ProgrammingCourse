#include <stdio.h>

float investition_sum(int year, float sum, float percent);

void investition()
{
    float sum, percent;
    int year;

    printf("Enter sum\n");
    scanf("%f", &sum);
    printf("Enter interest\n");
    scanf("%f", &percent);

    printf("Your amount in 5 years:  %f", investition_sum(year, sum, percent));

    return (0);
}

float investition_sum(int year, float sum, float percent)
{
    for(year = 0; year <= 4; year++)
    {
        sum = sum + (sum * (percent / 100));
    }
    return(sum);
}

