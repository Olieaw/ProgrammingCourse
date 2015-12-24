#include "issituated_logic.h"

int calculation(struct poligon plot, struct poligon house1, struct poligon house2)
{

    if (((plot.length >= (house1.length + house2.length))
         && (plot.width >= house2.width)
         && (plot.width >= house1.width))
            || ((plot.width >= (house2.width + house1.width))
                && (plot.length >= house1.length)
                && (plot.length >= house2.length)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
