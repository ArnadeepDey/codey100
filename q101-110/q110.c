#include <stdio.h>
#include <stdlib.h>

void printSlidingWindowMax(int arr[], int n, int k)
{
    int *deque = (int *)malloc(n * sizeof(int));
    int front = 0;
    int rear = -1;

    for (int i = 0; i < n; i++)
    {
        if (front <= rear && deque[front] <= i - k)
        {
            front++;
        }

        while (front <= rear && arr[deque[rear]] <= arr[i])
        {
            rear--;
        }

        rear++;
        deque[rear] = i;

        if (i >= k - 1)
        {
            printf("%d ", arr[deque[front]]);
        }
    }
    printf("\n");

    free(deque);
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

    printf("Maximum elements: ");
    printSlidingWindowMax(arr, n, k);

    free(arr);
    return 0;
}
