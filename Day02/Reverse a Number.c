#include<stdio.h>
 int main()
{
	int n, rev = 0, digit;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int original = n;
	
	if(n < 0)
	n = -n;
	
	while(n != 0) {
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	
	printf("Reverse of %d = %d\n", original, rev);
	
	return 0;
}