#include <stdio.h>
struct Employee
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
};

void main()
{
    struct Employee emp;
    float tax, net_salary;
    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);
    printf("Enter employee name: ");
    scanf("%s", emp.emp_name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.emp_salary);
    tax = emp.emp_salary * 0.10;
    net_salary = emp.emp_salary - tax;
    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Employee Name: %s\n", emp.emp_name);
    printf("Employee Salary: %.2f\n", emp.emp_salary);
    printf("Tax (10%%): %.2f\n", tax);
    printf("Salary after tax: %.2f\n", net_salary);
}