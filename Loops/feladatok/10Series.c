#include <stdio.h>

/*
10. Write a program to display the n terms of harmonic series and their sum. Go to the editor
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334
Click me to see the solution
*/

int main(){

	int numberOfTerms;
	double sum = 0;

	printf("Input the number of terms: ");
	scanf("%d", &numberOfTerms);

	for(int i = 1; i <= numberOfTerms; i++){
		printf("1/%d + ", i);
		sum += 1.0/i;
	}

	printf("\num of Series upto %d terms : %lf", numberOfTerms, sum);
}