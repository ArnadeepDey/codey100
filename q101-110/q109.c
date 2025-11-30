#include <stdio.h>
#include <stdlib.h>

long long findMaxSumSubarray(int arr[], int n, int k)
{
    if (n < k)
    {
        printf("Invalid input: Array size must be greater than or equal to k.\n");
        return -1;
    }

    long long windowSum = 0;
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    long long maxSum = windowSum;

    for (int i = k; i < n; i++)
    {
        windowSum += arr[i] - arr[i - k];

        if (windowSum > maxSum)
        {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter window size k: ");
    scanf("%d", &k);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long result = findMaxSumSubarray(arr, n, k);

    if (result != -1)
    {
        printf("Maximum sum of subarray of size %d: %lld\n", k, result);
    }

    free(arr);
    return 0;
}
