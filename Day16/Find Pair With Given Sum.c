#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    int foundPair = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], target);
                foundPair = 1;
            }
        }
    }

    if (!foundPair)
        printf("No pair found with sum %d\n", target);

    return 0;
}