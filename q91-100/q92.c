#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (count[str[i] - 'a'] > 1)
            {
                firstRepeating = str[i];
                break;
            }
        }
    }

    if (firstRepeating != '\0')
    {
        printf("First repeating character: %c\n", firstRepeating);
    }
    else
    {
        printf("No repeating character found.\n");
    }

    return 0;
}
