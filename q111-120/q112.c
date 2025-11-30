#include <stdio.h>
#include <stdlib.h>

long long maxSubarraySum(int arr[], int n)
{
    long long max_so_far = arr[0];
    long long current_max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > current_max + arr[i])
        {
            current_max = arr[i];
        }
        else
        {
            current_max += arr[i];
        }

        if (current_max > max_so_far)
        {
            max_so_far = current_max;
        }
    }

    return max_so_far;
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long result = maxSubarraySum(arr, n);
    printf("Maximum Subarray Sum: %lld\n", result);

    free(arr);
    return 0;
}
