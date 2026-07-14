#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int choice;
    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display array\n2. Find sum\n3. Find max & min\n");
        printf("4. Reverse array\n5. Search element\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Array: ");
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");

        } else if (choice == 2) {
            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum = %d\n", sum);

        } else if (choice == 3) {
            int max = arr[0], min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max) max = arr[i];
                if (arr[i] < min) min = arr[i];
            }
            printf("Max = %d | Min = %d\n", max, min);

        } else if (choice == 4) {
            int start = 0, end = n - 1, temp;
            while (start < end) {
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++; end--;
            }
            printf("Array reversed!\n");

        } else if (choice == 5) {
            int key, found = 0;
            printf("Enter element to search: ");
            scanf("%d", &key);
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Found at index %d\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Not found!\n");

        } else if (choice != 6) {
            printf("Invalid choice!\n");
        }
    } while (choice != 6);

    printf("Exiting array operations.\n");
    return 0;
} 