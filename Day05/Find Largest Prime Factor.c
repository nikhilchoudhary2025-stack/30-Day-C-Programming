#include<stdio.h>

 int main()
{
	int n, i, largest = -1;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i = 2; i <= n; i++) {
		if(n % i == 0) {
			
			int j, isPrime = 1;
			for(j = 2; j * j <= i; j++) {
				if(i % j == 0) {
					isPrime = 0;
					break;
				}
			}
			if(isPrime == 1) {
				largest = i;
			}
		}
	}
	
	printf("Largest prime factor = %d\n", largest);
	return 0;
}