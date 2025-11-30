#include <stdio.h>

int main()
{
    int num, original, sum = 0, digit;

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
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}
