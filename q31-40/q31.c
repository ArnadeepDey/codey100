#include <stdio.h>

int main()
{
    int num, original;
    int binary = 0;
    int place = 1;
    int rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num == 0)
    {
        printf("Binary of %d = 0\n", original);
        return 0;
    }

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        rem = num % 2;
        binary = binary + rem * place;
        place = place * 10;
        num = num / 2;
    }

    if (original < 0)
    {
        printf("Binary of %d = -%d\n", original, binary);
    }
    else
    {
        printf("Binary of %d = %d\n", original, binary);
    }

    return 0;
}
