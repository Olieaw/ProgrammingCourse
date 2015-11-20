#include <stdio.h>
#include "count_number.h"

int func(int number1)
{
    int space = 0;
    while (number1 > 0)
  {
     number1 = number1 /10;
     space++;
  }
   // printf("%d\n", space);
    return (space);
}

int func2(int number2)
{
    int space2 = 0;
    while (number2 > 0)
   {
     number2 = number2 / 10;
     space2++;
   }
   // printf("%d\n", space2);
    return (space2);
}



