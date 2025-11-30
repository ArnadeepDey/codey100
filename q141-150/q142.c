#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[5];
    int i;

    printf("--- Enter Details for 5 Students ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n-------------------------------------------------\n");
    printf("%-15s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("-------------------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%-15s %-10d %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    printf("-------------------------------------------------\n");

    return 0;
}
