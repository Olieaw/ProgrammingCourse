#include "main.h"
#include "issituated.h"

void issituated()
{

    struct poligon plot;
    struct poligon house1;
    struct poligon house2;
    printf("Print land x, y:");
    scanf("%d%d", &plot.length, &plot.width);
    printf("Print the coordinates of house 1:");
    scanf("%d%d", &house1.length, &house1.width);
    printf("Print the coordinates of house 2:");
    scanf("%d%d", &house2.length, &house2.width);

    if (calculation(plot, house1, house2) == 1)
    {
        printf("There is enough space for who houses\n");
    }
    else
    {
        printf("There is not enough space for who houses\n");
    }
}
