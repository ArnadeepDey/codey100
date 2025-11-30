#include <stdio.h>

int findCeilIndex(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter integer x: ");
    scanf("%d", &x);

    int result = findCeilIndex(arr, n, x);

    if (result == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("Index of ceil: %d (Value: %d)\n", result, arr[result]);
    }

    return 0;
}
