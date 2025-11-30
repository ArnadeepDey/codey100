#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("Analyzing file...\n");

    while ((ch = fgetc(fptr)) != EOF)
    {
        ch = tolower(ch);

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fptr);

    printf("Vowels:     %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
