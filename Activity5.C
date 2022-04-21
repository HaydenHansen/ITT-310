/* Hayden Hansen
ITT-310
11/14/2021 */

#include <stdio.h>
// program to get the minimum value in the array
int minimum(int  values[10])
{
	int minValue, i; //declare variables

	minValue = values[0];

	for (i = 1; i < 10; ++i) // for loop to check values
	{
		if (values[i] < minValue)
			minValue = values[i];
	}
	return minValue; //returns min value
}

int main(void)
{ //declare variables 
	int scores[10], i, minScore;
	int minimum(int values[10]);

	printf("enter 10 scores\n");

	for (i = 0; i < 10; ++i) //for value to put them in the array
		scanf_s("%i", &scores[i]);
	
	minScore = minimum(scores); // runs minimum function
	printf("\nMinimum score is %i\n", minScore); //prints min

	return 0; //ends code
}