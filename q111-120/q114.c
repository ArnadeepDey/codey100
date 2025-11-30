#include <stdio.h>
#include <string.h>

int longestUniqueSubstr(char *s)
{
    int n = strlen(s);
    if (n == 0)
        return 0;

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
    {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < n; end++)
    {
        char currentChar = s[end];

        if (lastIndex[currentChar] >= start)
        {
            start = lastIndex[currentChar] + 1;
        }

        lastIndex[currentChar] = end;

        int currentLength = end - start + 1;
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main()
{
    char s[1000];

    printf("Enter a string: ");
    scanf("%s", s);

    int length = longestUniqueSubstr(s);
    printf("%d\n", length);

    return 0;
}
