#include <stdio.h>

int main()
{
    int n, i;
    long long product;

    printf("Enter n: ");
    scanf("%d", &n);

    product = 1;

    for (i = 2; i <= n; i += 2)
    {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
