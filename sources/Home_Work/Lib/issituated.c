#include <stdio.h>

void issituated()
{
    int a, b, r, s, p, q;

    printf("Print land x, y:");
    scanf("%d%d", &a, &b);
    printf("Print the coordinates of house 1:");
    scanf("%d%d", &p, &q);
    printf("Print the coordinates of house 2:");
    scanf("%d%d", &r, &s);

    if (((a >= (p + r)) && (b >= q) && (b >= s)) || ((b >= (q + s)) && (a >= r) && (a >= p)))
    {
        printf("There are enough space for who houses");
    }
    else
    {
        printf("There are not enough space for who houses");
    }
    return 0;
}
