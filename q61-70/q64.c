#include <stdio.h>

int main()
{
    long long num, temp;
    int freq[10] = {0};
    int digit;
    int maxFreq = 0, maxDigit = 0;
    int i;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        printf("Digit occurring most times is 0\n");
        return 0;
    }

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times is %d (frequency = %d)\n", maxDigit, maxFreq);

    return 0;
}
