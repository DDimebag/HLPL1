#include <stdio.h>

/*
11. Write a program to check whether a given number is a perfect number or not
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
*/

int main(){

	int number, sum = 0;

	printf("Input the number : ");
	scanf("%d", &number);

	printf("The positive divisor : ");
	for(int i = 1; i < number; i++){
		if(number % i == 0){
			printf("%d ", i);
			sum += i;
		}
	}

	printf("\nThe sum of the divisor is : %d\n", sum);

	if(sum == number)
		printf("So, the number is perfect.");
	else
		printf("So, the number is NOT perfect.");

}
