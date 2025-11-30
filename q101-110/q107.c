#include <stdio.h>

void printPreviousGreaterElements(int arr[], int n)
{
    int i, j, prev;

    for (i = 0; i < n; i++)
    {
        prev = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                prev = arr[j];
                break;
            }
        }

        if (i == n - 1)
        {
            printf("%d", prev);
        }
        else
        {
            printf("%d, ", prev);
        }
    }
    printf("\n");
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");
    printPreviousGreaterElements(arr, n);

    return 0;
}
