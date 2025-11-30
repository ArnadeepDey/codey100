#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main()
{
    struct Employee emp = {
        "John Doe",
        1001,
        55000.0,
        {15, 8, 2023}};

    printf("--- Employee Profile ---\n");
    printf("Name:         %s\n", emp.name);
    printf("Employee ID:  %d\n", emp.emp_id);
    printf("Salary:       $%.2f\n", emp.salary);

    printf("Joining Date: %02d/%02d/%d\n",
           emp.joining_date.day,
           emp.joining_date.month,
           emp.joining_date.year);

    return 0;
}
