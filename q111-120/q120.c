#include <stdio.h>
#include <string.h>

void toSentenceCase(char *str)
{
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
    }
}

int main()
{
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toSentenceCase(str);

    printf("Sentence Case: %s", str);

    return 0;
}
