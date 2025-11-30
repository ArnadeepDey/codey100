#include <stdio.h>

int main()
{
    FILE *fptr;
    int num;
    int sum = 0;
    int count = 0;

    fptr = fopen("numbers.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    printf("Reading numbers from file...\n");

    while (fscanf(fptr, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    if (count > 0)
    {
        double average = (double)sum / count;
        printf("Count:   %d\n", count);
        printf("Sum:     %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("No numbers found in the file.\n");
    }

    fclose(fptr);

    return 0;
}
