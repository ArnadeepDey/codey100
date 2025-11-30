#include <stdio.h>

int main()
{
    int n, i, x, pos;
    int arr[101];

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n;
    for (i = 0; i < n; i++)
    {
        if (x < arr[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n = n + 1;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
