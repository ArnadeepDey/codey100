#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j, start_col;
    int a[10][10];

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

    printf("Diagonal traversal (top-left to bottom-right, each diagonal):\n");

    for (start_col = 0; start_col < cols; start_col++)
    {
        i = 0;
        j = start_col;
        while (i < rows && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for (i = 1; i < rows; i++)
    {
        int r = i;
        int c = cols - 1;
        while (r < rows && c >= 0)
        {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    return 0;
}
