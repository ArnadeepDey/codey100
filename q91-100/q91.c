#include <stdio.h>

int isVowel(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0')
    {
        if (isVowel(str[i]) == 0)
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    printf("String without vowels: %s\n", str);

    return 0;
}
