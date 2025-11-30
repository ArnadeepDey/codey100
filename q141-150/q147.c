#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int emp_id;
    float salary;
};

int main()
{
    FILE *fp;
    struct Employee e_write = {"Jane Smith", 2002, 65000.50};
    struct Employee e_read;

    fp = fopen("employee.bin", "wb");
    if (fp != NULL)
    {
        fwrite(&e_write, sizeof(struct Employee), 1, fp);
        printf("Data written to file successfully.\n");
        fclose(fp);
    }
    else
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fp = fopen("employee.bin", "rb");
    if (fp != NULL)
    {
        fread(&e_read, sizeof(struct Employee), 1, fp);

        printf("\n--- Data Read from File ---\n");
        printf("Name:       %s\n", e_read.name);
        printf("Emp ID:     %d\n", e_read.emp_id);
        printf("Salary:     %.2f\n", e_read.salary);

        fclose(fp);
    }
    else
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    return 0;
}
