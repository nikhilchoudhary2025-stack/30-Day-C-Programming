#include<stdio.h>
 
 int main()
{
	int n, i, a = 0, b = 1, c;
	
	printf("Enter position N: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++ ) {
		c = a + b;
		a = b;
		b = c;
	}
	
	printf("%dth Fibonacci term = %d\n", n, b);
	
	return 0;
}