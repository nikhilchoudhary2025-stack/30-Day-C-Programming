#include<stdio.h>

long factorial(int n) {
	if(n == 0 || n == 1)
	   return 1;
	return n * factorial(n - 1);
}

int main() {
	int n = 6;
	printf("Factorial of %d = %ld\n", n, factorial(n));
	return 0;
}