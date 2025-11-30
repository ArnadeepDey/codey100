#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        charCount++;

        if (ch == '\n')
        {
            lineCount++;
        }

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            wordCount++;
        }
    }

    if (charCount > 0)
    {
        lineCount++;
    }

    fclose(fptr);

    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", charCount);
    printf("Words:      %d\n", wordCount);
    printf("Lines:      %d\n", lineCount);

    return 0;
}
