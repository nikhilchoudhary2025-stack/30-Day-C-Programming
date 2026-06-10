#include<stdio.h>
 int main()
{
	int n, digit;
	long product = 1;
	
	printf("Enter the digit: ");
	scanf("%d", &n);
	
	if(n < 0)
	 n = -n;
	 
	 if(n == 0){
	 	product = 0;
	 } else{
	 	while(n != 0){
	 		digit = n % 10;
	 		product = product * digit;
	 		n = n / 10;
		 }
	 }
	 
	 printf("Product of the digit = %ld\n", product);
	 
	 return 0;
}