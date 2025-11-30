#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[50];
    int age;

    fptr = fopen("info.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);

    fclose(fptr);

    printf("Data successfully written to info.txt\n");

    return 0;
}
