#include<stdio.h>
#include<math.h>

	int isArmstrong(int n) {
		int original = n, sum = 0, digit, numDigits = 0;
		int temp = n;
		while(temp != 0) {
			numDigits++;
			temp /= 10;
		}
		temp = n;
		while(temp != 0) {
			digit = temp % 10;
			sum += pow(digit, numDigits);
			temp /= 10;
		}
		return sum == original;
	}
	
	int main() {
		int n = 153;
		if (isArmstrong(n))
		    printf("%d is an Armstrong number\n", n);
		else
		    printf("%d is not an Armstrong number\n", n);
		return 0;
	}
