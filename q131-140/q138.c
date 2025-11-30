#include <stdio.h>

enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    int i;

    const char *levelNames[] = {
        "LOW",
        "MEDIUM",
        "HIGH"};

    printf("Enum Name\tInteger Value\n");
    printf("-----------------------------\n");

    for (i = LOW; i <= HIGH; i++)
    {
        printf("%-10s\t%d\n", levelNames[i], i);
    }

    return 0;
}
