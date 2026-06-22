#include <stdio.h>

int main() {
    int n, original, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    
    while(temp != 0) {
        digit = temp % 10;        
        sum = sum + (digit * digit * digit);  
        temp = temp / 10;         
    }

    
    if(sum == original) {
        printf("%d is an Armstrong number!\n", original);
    } else {
        printf("%d is NOT an Armstrong number!\n", original);
    }

    return 0;
}