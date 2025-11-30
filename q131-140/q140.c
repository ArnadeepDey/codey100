#include <stdio.h>
#include <string.h>

typedef enum
{
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct
{
    char name[50];
    Gender gender;
} Person;

int main()
{
    Person p1;
    strcpy(p1.name, "Alex");
    p1.gender = MALE;

    printf("Person Details:\n");
    printf("Name: %s\n", p1.name);

    printf("Gender: ");
    switch (p1.gender)
    {
    case MALE:
        printf("Male\n");
        break;
    case FEMALE:
        printf("Female\n");
        break;
    case OTHER:
        printf("Other\n");
        break;
    default:
        printf("Unknown\n");
    }

    return 0;
}
