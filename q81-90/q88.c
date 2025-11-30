#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    printf("Result: %s\n", str);

    return 0;
}
