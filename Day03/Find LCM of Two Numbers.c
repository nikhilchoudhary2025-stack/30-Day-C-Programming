#include<stdio.h>
 
 int main()
{
	int a, b, x, y, remainder;
	long lcm;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	x = a;
	y = b;
	
	while(b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;
	}
	
	lcm = ((long)x * y) / a;
	
	printf("LCM(%d ,%d) = %ld\n", x, y, lcm);
	
	return 0;
}