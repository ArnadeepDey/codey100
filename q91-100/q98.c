#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i, lastSpaceIndex = -1;

    printf("Enter full name: ");
    scanf("%[^\n]s", name);

    for (i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            lastSpaceIndex = i;
        }
    }

    if (lastSpaceIndex == -1)
    {
        printf("Full Name: %s\n", name);
        return 0;
    }

    printf("Formatted Name: ");

    printf("%c. ", toupper(name[0]));

    for (i = 0; i < lastSpaceIndex; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    for (i = lastSpaceIndex + 1; name[i] != '\0'; i++)
    {
        if (i == lastSpaceIndex + 1)
        {
            printf("%c", toupper(name[i]));
        }
        else
        {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}
