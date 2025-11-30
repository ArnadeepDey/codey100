#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[100];
    int i;

    printf("Enter full name: ");
    scanf("%[^\n]s", name);

    printf("Initials: ");

    if (strlen(name) > 0)
    {
        printf("%c", toupper(name[0]));
    }

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
        {
            printf(".%c", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
