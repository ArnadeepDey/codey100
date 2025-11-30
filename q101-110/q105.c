#include <stdio.h>

int findMajorityElement(int arr[], int n)
{
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int occurrences = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            occurrences++;
        }
    }

    if (occurrences > n / 2)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr1[] = {2, 2, 1, 1, 1, 2, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 2, 3, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int result1 = findMajorityElement(arr1, n1);
    printf("Majority Element (Arr1): %d\n", result1);

    int result2 = findMajorityElement(arr2, n2);
    printf("Majority Element (Arr2): %d\n", result2);

    return 0;
}
