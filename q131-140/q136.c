#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    enum Operation op = (enum Operation)choice;

    switch (op)
    {
    case ADD:
        printf("Result: %d + %d = %d\n", a, b, a + b);
        break;
    case SUBTRACT:
        printf("Result: %d - %d = %d\n", a, b, a - b);
        break;
    case MULTIPLY:
        printf("Result: %d * %d = %d\n", a, b, a * b);
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
