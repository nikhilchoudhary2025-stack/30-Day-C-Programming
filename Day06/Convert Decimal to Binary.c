#include<stdio.h>
 
 int main()
{
	int n, i = 0, binary[32], j;
	
	printf("Enter decimal number: ");
	scanf("%d", &n);
	
	if(n == 0) {
		printf("Binary = 0\n");
		return 0;
	}
	
	while(n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	
	printf("Binary = ");
	for(j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");
	
	return 0;
}