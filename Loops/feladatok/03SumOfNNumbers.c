#include <stdio.h>

/*
3. Write a program to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/

int main(){

	int n;
	int sum = 0;

	scanf("%d", &n);
	printf("The first %d natural number is: ", n);

	for(int i = 1; i <= n; i++){
		sum += i;
		printf("%d ", i);
	}

	printf("\nThe Sum of Natural Number upto %d terms %d\n", n, sum);

}