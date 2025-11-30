#include <stdio.h>

int main()
{
    int num, original;
    int firstDigit, lastDigit, digits = 0;
    int power = 1;
    int middlePart, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num < 10 && num > -10)
    {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }

    if (num < 0)
    {
        num = -num;
    }

    lastDigit = num % 10;

    int temp = num;
    while (temp > 9)
    {
        temp = temp / 10;
        power = power * 10;
    }
    firstDigit = temp;

    middlePart = num % power;
    middlePart = middlePart / 10;

    swappedNum = lastDigit * power + middlePart * 10 + firstDigit;

    if (original < 0)
    {
        swappedNum = -swappedNum;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
