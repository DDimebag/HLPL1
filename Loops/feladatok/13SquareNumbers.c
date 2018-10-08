#include <stdio.h>

/*
13. Write a program to display the n terms of square natural number and their sum.
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/

int main(){

	int number, sum = 0;

	printf("Input the number of terms : ");
	scanf("%d", &number);

	printf("The square natural upto %d terms are :", number);

	for(int i = 1; i <= number; i++){
		printf("%d ", i*i);
		sum += i*i;
	}

	printf("\nThe Sum of Square Natural Number upto %d terms = %d\n", number, sum);

}
