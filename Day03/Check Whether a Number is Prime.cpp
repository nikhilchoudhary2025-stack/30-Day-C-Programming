#include<stdio.h>
 int main()
{
	int n, i, isPrime = 1;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(n < 2){
		isPrime = 0;
	} else {
		for(i = 2; i * i <= n; i++) {
			if(n % i == 0){
				isPrime = 0;
				break;
			}
		}
	}
	
	if(isPrime == 1) {
		printf("%d is a PRIME number! \n", n);
	} else {
		printf("%d is NOT prime number! \n", n);
	}
	
	return 0;
}