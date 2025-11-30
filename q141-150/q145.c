#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n)
{
    struct Student maxStudent = s[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > maxStudent.marks)
        {
            maxStudent = s[i];
        }
    }
    return maxStudent;
}

int main()
{
    struct Student students[3] = {
        {"Alice", 101, 88.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 85.0}};

    struct Student topper = getTopStudent(students, 3);

    printf("--- Top Student Details ---\n");
    printf("Name:    %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks:   %.2f\n", topper.marks);

    return 0;
}
