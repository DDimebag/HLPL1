#include <stdio.h>

/*
9. Write a program to display the n terms of even natural number and their sum.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
Click me to see the solution
*/

int main(){

	int numberOfTerms, sum = 0;

	scanf("%d", &numberOfTerms);

	printf("The even numbers are: ");
	for(int i = 1; i <= numberOfTerms; i++){
		printf("%d ", 2*i);
		sum += 2*i;
	}

	printf("\nThe Sum of eve Natural Number upto %d terms: %d", numberOfTerms, sum);
}