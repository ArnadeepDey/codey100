#include <stdio.h>
#include <stdlib.h>

void printFirstNegativeInteger(int arr[], int n, int k)
{
    int *queue = (int *)malloc(n * sizeof(int));
    int front = 0;
    int rear = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            queue[rear++] = i;
        }

        if (front < rear && queue[front] <= i - k)
        {
            front++;
        }

        if (i >= k - 1)
        {
            if (front < rear)
            {
                printf("%d ", arr[queue[front]]);
            }
            else
            {
                printf("0 ");
            }
        }
    }
    printf("\n");

    free(queue);
}

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter window size k: ");
    scanf("%d", &k);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("First negative integers: ");
    printFirstNegativeInteger(arr, n, k);

    free(arr);
    return 0;
}
