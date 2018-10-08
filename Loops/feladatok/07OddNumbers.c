#include <stdio.h>

/*
8. Write a program to display the n terms of odd natural number and their sum .
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/

int main(){

	int numberOfTerms, sum = 0;

	scanf("%d", &numberOfTerms);

	printf("The odd numbers are: ");
	for(int i = 1; i <= numberOfTerms; i++){
		printf("%d ", 2*i-1);
		sum += 2*i-1;
	}

	printf("\nThe Sum of odd Natural Number upto %d terms: %d", numberOfTerms, sum);
}