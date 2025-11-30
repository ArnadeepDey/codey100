#include <stdio.h>

void printNextGreaterElements(int arr[], int n)
{
    int i, j, next;

    for (i = 0; i < n; i++)
    {
        next = -1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        if (i == n - 1)
        {
            printf("%d", next);
        }
        else
        {
            printf("%d, ", next);
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

    printf("Next Greater Elements: ");
    printNextGreaterElements(arr, n);

    return 0;
}
