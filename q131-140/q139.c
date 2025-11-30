#include <stdio.h>

enum Color
{
    RED = 10,
    GREEN = 20,
    BLUE = 30
};

int main()
{
    enum Color c1 = RED;
    enum Color c2 = GREEN;
    enum Color c3 = BLUE;

    printf("Stored Integer Values:\n");
    printf("RED:   %d\n", c1);
    printf("GREEN: %d\n", c2);
    printf("BLUE:  %d\n", c3);

    printf("\nArithmetic Proof (GREEN + 5): %d\n", c2 + 5);

    return 0;
}
