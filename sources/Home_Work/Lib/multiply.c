#include <stdio.h>

int multiply()
{
    int number1, number2,digit, digit1, digit2, digit3, composition, number1_digit, copy_number2;
    int array[1000];
    int i = 0;
    printf("Input first number: \n");
    scanf("%d", &number1);
    printf("Input second number: \n");
    scanf("%d", &number2);

    copy_number2 = number2;
    digit1 = func(number1);
    digit2 = func2(number2);

    if (digit1 > digit2)
    {
        printf("%d\n", number1);
        for (digit3 = digit1 - digit2; digit3 > 0; digit3--)
        {
            printf(" ");
        }
        printf("%d\n", number2);
    }
        else
    {
        printf("%d\n", number2);
        for (digit3 = digit2 - digit1; digit3 > 0; digit3--)
        {
            printf(" ");
        }
        printf("%d\n", number1);

    }


    printf("------------------");

    while (number2 != 0)
    {
      digit = number2 % 10;
      number2 = number2 / 10;

      number1_digit = number1 * digit;

      printf("\n %d", number1_digit);

      i++;
    }


    printf("\n------------------");
    composition = number1 * copy_number2;
    printf("\n %d", composition);
    return 0;

}

