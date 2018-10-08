#include <stdio.h>

/*
6. Write a program in C to display the multiplication table of a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/

int main(){

	int number;

	printf("Input the number (Table to be calculated) : ");
	scanf("%d", &number);

	for(int i = 1; i <= 10; i++){
		printf("%d X %d = %d\n", number, i, number * i);
	}
}