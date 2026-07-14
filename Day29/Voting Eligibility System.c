#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);

    char name[50];
    int age;
    int eligible = 0, notEligible = 0;

    printf("\n--- Voting Eligibility Check ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of person %d: ", i + 1);
        scanf("%s", name);
        printf("Enter age: ");
        scanf("%d", &age);

        if (age >= 18) {
            printf("%s is eligible to vote.\n", name);
            eligible++;
        } else {
            printf("%s is NOT eligible to vote. (Age: %d)\n", name, age);
            notEligible++;
        }
    }

    printf("\n--- Summary ---\n");
    printf("Total people checked: %d\n", n);
    printf("Eligible to vote: %d\n", eligible);
    printf("Not eligible: %d\n", notEligible);

    return 0;
}