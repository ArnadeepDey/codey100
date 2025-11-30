#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int arr1[], int m, int arr2[], int n)
{
    int *merged = (int *)malloc((m + n) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m)
    {
        merged[k++] = arr1[i++];
    }

    while (j < n)
    {
        merged[k++] = arr2[j++];
    }

    printf("Merged Array: ");
    for (int x = 0; x < m + n; x++)
    {
        printf("%d ", merged[x]);
    }
    printf("\n");

    free(merged);
}

int main()
{
    int m, n;

    printf("Enter size of first array (m): ");
    scanf("%d", &m);
    int *arr1 = (int *)malloc(m * sizeof(int));
    printf("Enter sorted elements of first array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array (n): ");
    scanf("%d", &n);
    int *arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter sorted elements of second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, m, arr2, n);

    free(arr1);
    free(arr2);
    return 0;
}
