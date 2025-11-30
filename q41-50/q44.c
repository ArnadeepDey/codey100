#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0f;
    float numerator = 1.0f, denominator = 1.0f;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + numerator / denominator;
        numerator = numerator + 2.0f;
        denominator = denominator + 2.0f;
    }

    printf("Sum of the series up to %d terms = %f\n", n, sum);

    return 0;
}
