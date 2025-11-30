#include <stdio.h>

int main()
{
    int num, original, reverse, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    reverse = 0;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("%d is a palindrome\n", original);
    }
    else
    {
        printf("%d is not a palindrome\n", original);
    }

    return 0;
}
