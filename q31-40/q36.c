#include <stdio.h>

int main()
{
    int a, b, i, min, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    min = (a < b) ? a : b;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d = %d\n", a, b, hcf);

    return 0;
}
