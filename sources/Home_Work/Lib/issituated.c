#include "issituated.h"

/// Давайте заведем структуры для координат?
int calculation(struct poligon plot, struct poligon house1, struct poligon house2)
{

    /// Эта длиннющая строка вообще не читается, подумайте, может быть сделать
    /// несколько маленьких функций с говорящими названиями,
    /// которые бы возвращали истину или ложь,
    /// is_cat_eats_dog() && is_sun_shining || is_blabla
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
