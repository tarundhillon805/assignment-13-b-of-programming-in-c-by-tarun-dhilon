#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;
    struct Employee *ptr;

    ptr = &e;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", ptr->name);

    printf("Enter Employee Salary: ");
    scanf("%f", &ptr->salary);

    // Display original details
    printf("\nOriginal Employee Details:\n");
    printf("Employee ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    // Modify salary using structure pointer
    printf("\nEnter New Salary: ");
    scanf("%f", &ptr->salary);

    // Display modified details
    printf("\nUpdated Employee Details:\n");
    printf("Employee ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}