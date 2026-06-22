#include<stdio.h>
 
 long factorial(int n) {
 	if(n == 0 || n == 1)
 	return 1;
 	return n * factorial(n-1);
 }
 
 int main() {
 	int n;
 	
 	printf("Enter a number (0-20 only): ");
 	scanf("%d", &n);
 	
 	if(n < 0) {
 		printf("Factorial not defined for negative!\n");
	 } else if(n > 20) { 
	 	printf("Number too large! Enter between 0-20!");
	 } else {
	 	printf("Factorial of %d = %ld\n", n, factorial(n));
	 }
	 
	 return 0;
 }