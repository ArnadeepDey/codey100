#include <stdio.h>

int main()
{
    int num, original;
    int product = 1;
    int digit;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num < 0)
    {
        num = -num;
    }

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            product = product * digit;
            hasOdd = 1;
        }
        num = num / 10;
    }

    if (hasOdd == 0)
    {
        printf("No odd digits in %d\n", original);
    }
    else
    {
        printf("Product of odd digits of %d = %d\n", original, product);
    }

    return 0;
}
