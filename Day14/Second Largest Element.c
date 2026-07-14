#include<stdio.h>
 
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++) 
	    scanf("%d", &arr[i]);
	    
	int largest = arr[0], secondLargest = - 1;
	
	for(int i = 1; i < n; i++) {
	   if(arr[i] > largest) {
	   	  secondLargest = largest;
	   	  largest = arr[i];
	   } else if(arr[i] > secondLargest && arr[i] != largest) {
	   	  secondLargest = arr[i];
	   }
	}
	
	printf("Largest = %d\n", largest);
	printf("Second Largest = %d\n", secondLargest);
	
	return 0;
}