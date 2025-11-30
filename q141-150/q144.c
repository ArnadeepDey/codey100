#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s)
{
    printf("\n--- Student Details (Printed inside function) ---\n");
    printf("Name:    %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks:   %.2f\n", s.marks);
}

int main()
{
    struct Student s1;

    strcpy(s1.name, "Alice");
    s1.roll_no = 101;
    s1.marks = 95.5;

    printStudent(s1);

    return 0;
}
