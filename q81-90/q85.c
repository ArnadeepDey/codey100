#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, j, len = 0;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0')
    {
        len++;
    }

    i = 0;
    j = len - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
