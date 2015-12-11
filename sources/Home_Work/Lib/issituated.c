#include "issituated.h"

int calculation(int length_plot, int width_plot, int length_house1, int width_house1, int length_house2, int width_house2)
{
    if (((length_plot >= (length_house2 + length_house1)) && (width_plot >= width_house2) && (width_plot >= width_house1)) || ((width_plot >= (width_house2 + width_house1)) && (length_plot >= length_house1) && (length_plot >= length_house2)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
