#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        if (i % 2 == 1)
        {
            int stars = i;
            for (j = 1; j <= stars; j++)
            {
                printf("*\n");
            }
            printf("\n");
        }
    }

    return 0;
}
