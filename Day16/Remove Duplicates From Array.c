#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}