#include<stdio.h>

 int checkPrime(int num) 
{
	int i;
	
	if(num < 2) return 0;
	
	for(i = 2; i * i <= num; i++) {
		if(num % i == 0) {
			return 0;
		}
	}
	return 1;
}
 int main() {
 	int start, end, i;
 	
 	printf("Enter start of range: ");
 	scanf("%d", &start);
 	
 	printf("Enter end of range: ");
 	scanf("%d", &end);
 	
 	printf("Prime numbers between %d and %d:\n", start, end);
 	
 	for(i = start; i <= end; i++) {
 		if(checkPrime(i) == 1) {
 			printf("%d\n", i);
		 }
	 }
	 printf("\n");
	 
	 return 0;
 }