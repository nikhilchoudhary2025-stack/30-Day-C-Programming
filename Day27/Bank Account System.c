#include <stdio.h>

struct Account {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    printf("Enter account number: ");
    scanf("%d", &acc.accountNo);
    printf("Enter name: ");
    scanf("%s", acc.name);
    printf("Enter initial balance: ");
    scanf("%f", &acc.balance);

    int choice;
    float amount;

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            acc.balance += amount;
            printf("Deposited %.2f. New balance: %.2f\n", amount, acc.balance);
        } else if (choice == 2) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount > acc.balance) {
                printf("Insufficient balance!\n");
            } else {
                acc.balance -= amount;
                printf("Withdrawn %.2f. New balance: %.2f\n", amount, acc.balance);
            }
        } else if (choice == 3) {
            printf("Account: %d | Name: %s | Balance: %.2f\n",
                   acc.accountNo, acc.name, acc.balance);
        }
    } while (choice != 4);

    printf("Thank you for banking with us!\n");
    return 0;
}