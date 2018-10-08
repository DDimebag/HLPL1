#include <stdio.h>

/*
8. Write a program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/

int main(){

	int num, factorial = 1;

	printf("Input the number: ");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		factorial *= i;
	}

	printf("\nThe Factorial of %d is: %d", num, factorial);
}