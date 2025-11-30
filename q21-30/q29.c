#include <stdio.h>

int main()
{
    int n, i;
    long long factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
