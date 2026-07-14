#include<stdio.h>

 int maximum(int a, int b) {
 	if(a > b)
 	   return a;
 	return b;
 }
 
 int main() {
 	int a = 12, b = 7;
 	printf("Maximum = %d\n", maximum(a, b));
 	return 0;
 }