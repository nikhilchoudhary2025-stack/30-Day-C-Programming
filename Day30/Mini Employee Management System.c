#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

void displayEmployee(struct Employee e) {
    printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
           e.id, e.name, e.dept, e.salary);
}

float calculateBonus(float salary) {
    if (salary >= 50000) return salary * 0.20;
    else if (salary >= 30000) return salary * 0.15;
    else return salary * 0.10;
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    for (int i = 0; i < n; i++) {
        emp[i].id = i + 1;
        printf("\nEnter name: ");
        scanf("%s", emp[i].name);
        printf("Enter department: ");
        scanf("%s", emp[i].dept);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    int choice;
    do {
        printf("\n1. Display all\n2. Search employee\n3. Show bonus\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < n; i++)
                displayEmployee(emp[i]);

        } else if (choice == 2) {
            char searchName[50];
            printf("Enter name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(emp[i].name, searchName) == 0) {
                    displayEmployee(emp[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Employee not found!\n");

        } else if (choice == 3) {
            for (int i = 0; i < n; i++) {
                float bonus = calculateBonus(emp[i].salary);
                printf("Name: %s | Salary: %.2f | Bonus: %.2f | Total: %.2f\n",
                       emp[i].name, emp[i].salary, bonus,
                       emp[i].salary + bonus);
            }
        }
    } while (choice != 4);

    return 0;
}