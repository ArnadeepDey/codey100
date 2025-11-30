#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
