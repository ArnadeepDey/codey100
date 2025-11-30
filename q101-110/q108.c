#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int nums[], int n, int answer[])
{
    answer[0] = 1;
    for (int i = 1; i < n; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * rightProduct;
        rightProduct = rightProduct * nums[i];
    }
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));
    int *answer = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    productExceptSelf(nums, n, answer);

    printf("Product Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }
    printf("\n");

    free(nums);
    free(answer);

    return 0;
}
