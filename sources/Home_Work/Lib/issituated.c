#include "issituated.h"

void issituated()
{
    int length_plot, width_plot, length_house1, width_house1, length_house2, width_house2;

    printf("Print land x, y:");
    scanf("%d%d", &length_plot, &width_plot);
    printf("Print the coordinates of house 1:");
    scanf("%d%d", &length_house1, &width_house1);
    printf("Print the coordinates of house 2:");
    scanf("%d%d", &length_house2, &width_house2);

    if (calculation(length_plot, width_plot, length_house1, width_house1, length_house2, width_house2) == 1)
    {
        printf("There are enough space for who houses\n");
    }
    else
    {
        printf("There are not enough space for who houses\n");
    }
}


/// Давайте заведем структуры для координат?
int calculation(int length_plot, int width_plot, int length_house1, int width_house1, int length_house2, int width_house2)
{

    /// Эта длиннющая строка вообще не читается, подумайте, может быть сделать
    /// несколько маленьких функций с говорящими названиями,
    /// которые бы возвращали истину или ложь,
    /// is_cat_eats_dog() && is_sun_shining || is_blabla
    if (((length_plot >= (length_house2 + length_house1))
         && (width_plot >= width_house2)
         && (width_plot >= width_house1))
            || ((width_plot >= (width_house2 + width_house1))
                && (length_plot >= length_house1)
                && (length_plot >= length_house2)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
