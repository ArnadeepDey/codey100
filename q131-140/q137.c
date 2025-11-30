#include <stdio.h>

enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    int input;

    printf("Select User Role:\n");
    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &input);

    enum UserRole role = (enum UserRole)input;

    switch (role)
    {
    case ADMIN:
        printf("\n[System]: Welcome, Admin! You have full access.\n");
        break;
    case USER:
        printf("\n[System]: Welcome, User! You have limited access.\n");
        break;
    case GUEST:
        printf("\n[System]: Welcome, Guest! You have read-only access.\n");
        break;
    default:
        printf("\n[System]: Invalid Role Selection.\n");
    }

    return 0;
}
