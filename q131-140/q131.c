#include <stdio.h>

enum Week
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    int day;

    printf("Day Name\tInteger Value\n");
    printf("-----------------------------\n");

    for (day = SUNDAY; day <= SATURDAY; day++)
    {
        switch (day)
        {
        case SUNDAY:
            printf("SUNDAY   ");
            break;
        case MONDAY:
            printf("MONDAY   ");
            break;
        case TUESDAY:
            printf("TUESDAY  ");
            break;
        case WEDNESDAY:
            printf("WEDNESDAY");
            break;
        case THURSDAY:
            printf("THURSDAY ");
            break;
        case FRIDAY:
            printf("FRIDAY   ");
            break;
        case SATURDAY:
            printf("SATURDAY ");
            break;
        }

        printf("\t%d\n", day);
    }

    return 0;
}
