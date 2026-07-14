#include<stdio.h>

int main()
{
	int r, c;
	printf("Enter rows and columns: ");
	scanf("%d %d", &r, &c);
	
	int a[r][c], transpose[r][c];
	
	printf("Enter elements of matrix:\n");
	for(int i = 0; i < r; i++)
	   for(int j = 0; j < c; j++)
	      scanf("%d", &a[i][j]);
	      
	for(int i = 0; i < r; i++)
	   for(int j = 0; j < c; j++)
	      transpose[j][i] = a[i][j];
	      
	printf("Transpose matrix:\n");
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++)
		   printf("%d ", transpose[i][j]);
		printf("\n");
	}
	
	return 0;
}