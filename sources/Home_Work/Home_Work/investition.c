#include "main.h"
#include "investition_logic.h"

void input()
{
    float sum, percent;

    printf("Enter sum\n");
    scanf("%f", &sum);
    printf("Enter interest\n");
    scanf("%f", &percent);

    printf("Your amount in 5 years:  %f\n", investition_sum(sum, percent));
}

