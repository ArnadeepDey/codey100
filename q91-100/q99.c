#include <stdio.h>

int main()
{
    int day, month, year;

    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3)
    {
        printf("Invalid format! Please use dd/mm/yyyy.\n");
        return 1;
    }

    if (month < 1 || month > 12)
    {
        printf("Invalid month: %d\n", month);
        return 1;
    }

    printf("Formatted Date: %02d-%s-%d\n", day, months[month], year);

    return 0;
}
