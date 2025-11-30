#include <stdio.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char ch;

    printf("Enter the filename to check: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
    }
    else
    {
        printf("\n--- File Contents ---\n");

        while ((ch = fgetc(fptr)) != EOF)
        {
            printf("%c", ch);
        }

        printf("\n---------------------\n");

        fclose(fptr);
    }

    return 0;
}
