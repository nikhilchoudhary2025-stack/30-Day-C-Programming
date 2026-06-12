#include<stdio.h>
 
 int main()
{
	int n, i, a = 0, b = 1, c;
	
	printf("Enter how many terms: ");
	scanf("%d", &n);
	
	printf("Fibonacci Series: ");
	
	for(i = 1; i <= n; i++) {
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	
	printf("\n");
	
	return 0;
}