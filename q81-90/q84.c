#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    printf("Enter a lowercase string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
