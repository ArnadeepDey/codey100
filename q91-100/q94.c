#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longestWord[100], currentWord[100];
    int i, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            currentWord[j] = '\0';

            if (strlen(currentWord) > maxLen)
            {
                maxLen = strlen(currentWord);
                strcpy(longestWord, currentWord);
            }
            j = 0;
        }
        else
        {
            currentWord[j] = str[i];
            j++;
        }
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", maxLen);

    return 0;
}
