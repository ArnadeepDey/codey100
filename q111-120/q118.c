#include <stdio.h>
#include <stdlib.h>

int findMissingNumber(int arr[], int n)
{
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        actualSum += arr[i];
    }

    return (int)(expectedSum - actualSum);
}

int main()
{
    int n;

    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements (between 0 and %d): ", n, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("Missing number: %d\n", missing);

    free(arr);
    return 0;
}
