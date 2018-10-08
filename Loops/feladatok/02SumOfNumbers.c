#include <stdio.h>

/*
2. Write a program to find the sum of first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
int main(){

	int sum = 0;

	printf("The first 10 natural number is: ");

	for(int i = 1; i <= 10; i++){
		sum += i;
		printf("%d ", i);
	}

	printf("\nThe Sum is: %d\n", sum);

}