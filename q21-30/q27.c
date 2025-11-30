#include <stdio.h>

int main()
{
    int n, i, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= 2 * n; i += 2)
    {
        sum = sum + i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
