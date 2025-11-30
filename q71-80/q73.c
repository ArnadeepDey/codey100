#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;
    int a[10][10];
    int rowSum[10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    printf("Sum of each row stored in array:\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
