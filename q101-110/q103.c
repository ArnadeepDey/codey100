#include <stdio.h>

int findPivotIndex(int nums[], int n)
{
    int total_sum = 0;
    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {
        total_sum += nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (left_sum == (total_sum - left_sum - nums[i]))
        {
            return i;
        }
        left_sum += nums[i];
    }

    return -1;
}

int main()
{
    int nums[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    int pivotIndex = findPivotIndex(nums, n);

    printf("Pivot Index: %d\n", pivotIndex);

    return 0;
}