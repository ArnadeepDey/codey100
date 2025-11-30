#include <stdio.h>

enum Levels
{
    LEVEL_10 = 10,
    LEVEL_11,
    LEVEL_12,
    LEVEL_20 = 20,
    LEVEL_21
};

int main()
{
    printf("Enum Values:\n");
    printf("----------------\n");

    printf("LEVEL_10: %d\n", LEVEL_10);
    printf("LEVEL_11: %d\n", LEVEL_11);
    printf("LEVEL_12: %d\n", LEVEL_12);
    printf("LEVEL_20: %d\n", LEVEL_20);
    printf("LEVEL_21: %d\n", LEVEL_21);

    return 0;
}
