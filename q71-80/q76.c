#include <stdio.h>

int main()
{
    int n, i, j;
    int a[10][10];
    int isSymmetric = 1;

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

    for (i = 0; i < n && isSymmetric; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
