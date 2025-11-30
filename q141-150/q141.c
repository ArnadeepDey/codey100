#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter Student Details:\n");

    printf("Name (no spaces): ");
    scanf("%s", s.name);

    printf("Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Record ---\n");
    printf("Name:    %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks:   %.2f\n", s.marks);

    return 0;
}
