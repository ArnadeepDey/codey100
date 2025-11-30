#include <stdio.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char newText[1000];

    printf("Enter filename to append to: ");
    scanf("%s", filename);

    getchar();

    fptr = fopen(filename, "a");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(newText, sizeof(newText), stdin);

    fprintf(fptr, "%s", newText);

    printf("Text appended successfully.\n");

    fclose(fptr);
    return 0;
}
