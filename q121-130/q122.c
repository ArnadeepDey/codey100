#include <stdio.h>

int main()
{
    FILE *fptr;
    char buffer[100];

    fptr = fopen("info.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    printf("File Contents:\n");
    printf("----------------\n");

    while (fgets(buffer, sizeof(buffer), fptr) != NULL)
    {
        printf("%s", buffer);
    }

    printf("\n----------------\n");
    printf("End of File reached.\n");

    fclose(fptr);

    return 0;
}
