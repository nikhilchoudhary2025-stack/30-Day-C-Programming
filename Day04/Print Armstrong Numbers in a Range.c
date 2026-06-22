#include <stdio.h>

int main() {
    int start, end, i, temp, digit, sum;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d:\n", start, end);

    for(i = start; i <= end; i++) {
        sum = 0;
        temp = i;

        while(temp != 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        
        if(i <= 9 || sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}