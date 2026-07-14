#include <stdio.h>

int main() {
    int pin;
    int correctPin = 1234;
    float balance = 10000.00;
    int attempts = 0;

    printf("=== ATM Machine ===\n");

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        attempts++;

        if (pin == correctPin) {
            printf("PIN accepted!\n");
            break;
        } else {
            printf("Wrong PIN! %d attempt(s) remaining.\n", 3 - attempts);
        }
    }

    if (pin != correctPin) {
        printf("Card blocked! Too many wrong attempts.\n");
        return 0;
    }

    int choice;
    float amount;
    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Current balance: %.2f\n", balance);

        } else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid amount!\n");
            } else {
                balance += amount;
                printf("Deposited %.2f. New balance: %.2f\n", amount, balance);
            }

        } else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid amount!\n");
            } else if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance -= amount;
                printf("Withdrawn %.2f. Remaining balance: %.2f\n", amount, balance);
            }

        } else if (choice != 4) {
            printf("Invalid choice!\n");
        }
    } while (choice != 4);

    printf("Thank you for using ATM. Goodbye!\n");
    return 0;
}