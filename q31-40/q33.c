#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, temp;
    int digits = 0;
    int sum = 0;
    int rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (int)pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}
