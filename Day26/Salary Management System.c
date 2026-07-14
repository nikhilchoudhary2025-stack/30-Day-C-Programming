#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        emp[i].hra = 0.20 * emp[i].basicSalary;
        emp[i].da  = 0.50 * emp[i].basicSalary;
        emp[i].netSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    printf("\n--- Salary Slip ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nID: %d | Name: %s\n", emp[i].empId, emp[i].name);
        printf("Basic: %.2f | HRA: %.2f | DA: %.2f | Net: %.2f\n",
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].netSalary);
    }

    return 0;
}