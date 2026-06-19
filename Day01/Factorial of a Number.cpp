#include<stdio.h>
 int main()
{
	int n, i;
	unsigned long long fact = 1;
	
	printf("Enter the number N: ");
	scanf("%d", &n);
	
	if(n<0){
		printf("Factorial value is indefinite at negative variables: \n");
	}else{
		for(i=1;i<=n;i++){
			fact = fact * i;
		}
		printf("Facctorial of %d = %llu",n,fact);
		//                          ^^^
		//                    for unsigned long long
			}
}