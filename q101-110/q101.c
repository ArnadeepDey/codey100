#include <stdio.h>

int findFirst(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

int main()
{
    int nums[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;

    printf("Enter target to search: ");
    scanf("%d", &target);

    int firstIndex = findFirst(nums, n, target);
    int lastIndex = findLast(nums, n, target);

    if (firstIndex == -1)
    {
        printf("-1, -1\n");
    }
    else
    {
        printf("First Occurrence: %d\n", firstIndex);
        printf("Last Occurrence: %d\n", lastIndex);
    }

    return 0;
}
