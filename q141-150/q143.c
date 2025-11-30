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
    int i, max_index = 0;

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

    for (i = 1; i < 5; i++)
    {
        if (students[i].marks > students[max_index].marks)
        {
            max_index = i;
        }
    }

    printf("\n-----------------------------------\n");
    printf("Student with Highest Marks:\n");
    printf("-----------------------------------\n");
    printf("Name:    %s\n", students[max_index].name);
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Marks:   %.2f\n", students[max_index].marks);
    printf("-----------------------------------\n");

    return 0;
}
