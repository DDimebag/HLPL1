#include <stdio.h>

/*
12. Write a program to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Test Data :
Input the number of terms :5
Expected Output :
9 99 999 9999 99999
The sum of the series = 111105
*/

int main(){

	int number, sum = 0;
	int start = 9;

	printf("Input the number : ");
	scanf("%d", &number);

	for(int i = 1; i <= number; i++){
		sum += start;
		printf("%d ", start);
		start = start * 10 + 9;
	}

	printf("\nThe sum of the series = %d\n", sum);

}
