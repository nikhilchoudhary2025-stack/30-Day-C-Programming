#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n--- Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        if (choice == 1) {
            result = a + b;
            printf("Result: %.2f\n", result);
        } else if (choice == 2) {
            result = a - b;
            printf("Result: %.2f\n", result);
        } else if (choice == 3) {
            result = a * b;
            printf("Result: %.2f\n", result);
        } else if (choice == 4) {
            if (b == 0) {
                printf("Error: Division by zero!\n");
            } else {
                result = a / b;
                printf("Result: %.2f\n", result);
            }
        } else if (choice != 5) {
            printf("Invalid choice!\n");
        }
    } while (choice != 5);

    printf("Calculator closed.\n");
    return 0;
}