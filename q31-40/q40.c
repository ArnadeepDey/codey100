#include <stdio.h>

int main()
{
    char bin[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", bin);

    for (i = 0; bin[i] != '\0'; i++)
    {
        if (bin[i] == '0')
        {
            bin[i] = '1';
        }
        else if (bin[i] == '1')
        {
            bin[i] = '0';
        }
        else
        {
            printf("Invalid binary digit\n");
            return 0;
        }
    }

    printf("1's complement = %s\n", bin);

    return 0;
}
