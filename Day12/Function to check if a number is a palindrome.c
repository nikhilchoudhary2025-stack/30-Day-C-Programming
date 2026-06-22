#include<stdio.h>
 
int isPalindrome(int n) {
	int original = n, reversed = 0, digit;
	while(n != 0) {
		digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	}
	return original == reversed;
}

int main() {
	int n = 12321;
	if(isPalindrome(n))
	   printf("%d is a palindrome\n", n);
	else
	   printf("%d is not a palindrome\n", n);
	return 0;
}