#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int roll;
    float marks;
} Student;

int main()
{
    FILE *fptr;
    int n, i;
    Student s;

    fptr = fopen("students.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name (no spaces): ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fptr, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);
    printf("\nData saved to students.txt successfully.\n");

    printf("\n--- Reading Records from File ---\n");

    fptr = fopen("students.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Name\t\tRoll\tMarks\n");
    printf("----------------------------------\n");

    while (fscanf(fptr, "%s %d %f", s.name, &s.roll, &s.marks) == 3)
    {
        printf("%-15s %-7d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);

    return 0;
}
