#include<stdio.h>
 
 int main()
{
	int x, n, i;
	long result = 1;
	
	printf("Enter base (x): ");
	scanf("%d", &x);
	
	printf("Enter power (n): ");
	scanf("%d", &n);
	
	if(n == 0) {
		printf("%d^%d = 1\n",x ,n);
		return 0;
	}
	
	for(i = 1; i <= n; i++) {
		result = result * x;
	}
	
	printf("%d^%d = %ld\n", x, n, result);
	
	return 0;
}