#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, j, len = 0;
    int isPalindrome = 1;

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
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
