#include <stdio.h>

int main()
{
    int n, i, j;
    int a[10][10];
    int distinct = 1;

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

    for (i = 0; i < n && distinct; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
    {
        printf("All diagonal elements are distinct.\n");
    }
    else
    {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}
