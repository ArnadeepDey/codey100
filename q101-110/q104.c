#include <stdio.h>
#include <math.h>

int findPivotInteger(int n)
{
    long long totalSum = (long long)n * (n + 1) / 2;
    int x = (int)sqrt(totalSum);

    if ((long long)x * x == totalSum)
    {
        return x;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivotInteger(n);

    printf("%d\n", pivot);

    return 0;
}
