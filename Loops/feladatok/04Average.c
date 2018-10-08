#include <stdio.h>

/*
4. Write a program to read 10 numbers from keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/

int main(){

	int number;
	int sum = 0;

	printf("Input the 10 numbers : ");

	for(int i = 1; i <= 10; i++){
		printf("Number-%d :", i);
		scanf("%d", &number);
		sum += number;
	}

	printf("\nThe sum of 10 no is : %d\n", sum);
	printf("\nThe Average is : %lf\n", sum / 10.0);

}