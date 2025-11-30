#include <stdio.h>

int main()
{
    int n, k, i;
    int arr[100];
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (right rotation steps): ");
    scanf("%d", &k);

    if (n == 0)
    {
        return 0;
    }

    k = k % n;

    while (k > 0)
    {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        k--;
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
