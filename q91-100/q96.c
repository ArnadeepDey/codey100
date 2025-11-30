#include <stdio.h>
#include <string.h>

void reverseRange(char *str, int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];
    int i;
    int start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverseRange(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed words: %s\n", str);

    return 0;
}
