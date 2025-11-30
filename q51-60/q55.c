#include <stdio.h>

int main()
{
    int n, i, j, isPrime, count = 0;
    int primes[1000];

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("No prime numbers in this range.\n");
        return 0;
    }

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            primes[count] = i;
            count++;
        }
    }

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 0; i < count; i++)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
}
