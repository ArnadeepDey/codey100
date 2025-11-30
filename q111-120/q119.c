#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findDuplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);

        if (arr[index] < 0)
        {
            printf("Repeated element: %d\n", index);
            return;
        }

        arr[index] = -arr[index];
    }
    printf("No repeated element found.\n");
}

int main()
{
    int n;

    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements (0 to %d): ", n - 1);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findDuplicate(arr, n);

    free(arr);
    return 0;
}
