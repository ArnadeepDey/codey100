#include <stdio.h>

int main()
{
    int n, i, j;
    int a[10][10];
    int sum = 0;

    printf("Enter order of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
