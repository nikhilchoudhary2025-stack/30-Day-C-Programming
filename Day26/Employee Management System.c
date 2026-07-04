#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char department[30];
    float salary;
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
        printf("Department: ");
        scanf("%s", emp[i].department);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }

    return 0;
}