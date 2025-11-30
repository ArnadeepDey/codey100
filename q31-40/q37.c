#include <stdio.h>

int main()
{
    int a, b, i, gcd = 1, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;

    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
