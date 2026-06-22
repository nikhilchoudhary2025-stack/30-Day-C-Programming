#include<stdio.h>

 int main()
{
	int n, digit, decimal = 0, power = 1;
	
	printf("Enter binary number: ");
    scanf("%d", &n);
    
    while(n > 0) {
    	digit = n % 10;
    	decimal = decimal + digit * power;
    	power = power * 2;
    	n = n / 10;
	}
	
	printf("Decimal = %d\n", decimal);
	
	return 0;
}