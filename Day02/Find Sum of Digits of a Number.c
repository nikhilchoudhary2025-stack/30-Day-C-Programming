#include<stdio.h>
 int main()
{
	int n, sum = 0, digit;
	
	printf("Enter the Number: ");
	scanf("%d", &n);
	
	if(n < 0)
	 n = -n;
	 
	 
	 if(n == 0) {
	 	sum = 0;
	} else {
		while(n != 0) {
			digit = n % 10;
			sum = sum + digit;
			n = n / 10;
		}
	}
	 
	 printf("Sum of digit = %d\n", sum);
	 
	 return 0;
}