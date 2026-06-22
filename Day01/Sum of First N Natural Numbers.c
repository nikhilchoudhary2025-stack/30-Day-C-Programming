#include<stdio.h>
 int main()
{
	int n, i,sum;
	 printf("Enter N: ");
	 scanf("%d", &n);
	 
	 for(i=1;i<=n;i++){
	   sum = sum + i;
	 }
	  printf("Sum of first %d natural number = %d\n", n, sum);
	   
	return 0;
}