#include <stdio.h>

int main()
{
    int num, original;
    int sum = 0, digit, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a positive integer\n");
        return 0;
    }

    original = num;

    while (num != 0)
    {
        digit = num % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == original)
    {
        printf("%d is a strong number\n", original);
    }
    else
    {
        printf("%d is not a strong number\n", original);
    }

    return 0;
}
