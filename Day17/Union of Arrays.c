#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int result[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr1[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[k] = arr1[i];
            k++;
        }
    }

    for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[k] = arr2[i];
            k++;
        }
    }

    printf("Union: ");
    for (int i = 0; i < k; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}