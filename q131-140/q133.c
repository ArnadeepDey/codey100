#include <stdio.h>

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    int input;

    printf("Enter month number (1-12): ");
    scanf("%d", &input);

    enum Month currentMonth = (enum Month)input;

    switch (currentMonth)
    {
    case JANUARY:
    case MARCH:
    case MAY:
    case JULY:
    case AUGUST:
    case OCTOBER:
    case DECEMBER:
        printf("31 Days\n");
        break;

    case APRIL:
    case JUNE:
    case SEPTEMBER:
    case NOVEMBER:
        printf("30 Days\n");
        break;

    case FEBRUARY:
        printf("28 or 29 Days (depending on leap year)\n");
        break;

    default:
        printf("Invalid month number.\n");
    }

    return 0;
}
