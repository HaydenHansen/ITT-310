/*Hayden Hansen
ITT-310
12/19/2021*/
#include <stdio.h>
#include <string.h>
// declare functions 
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
void square(float a);
void cube(float a);

int main(int argc, char** argv)
{
	//create some variables and assign them some values
	float a = 1;
	float b = 1;
	int d;
	char c[100]; // c is used for the loop function to keep the calculator going
	printf("Would you like to run the calculator function? (yes or no) "); //These 2 lines are used to start the function
	scanf_s("%s", c, 100);
	printf("\n-----------------------------------------------------------------------------\n");
	while (strcmp(c, "yes") == 0) //compares the string to the word yes and then if the word is yes runs the loop
	{
		//Print the options the user can choose from and take their answer
		printf("Please choose an operation to preform\n");
		printf("Enter '1' for addition\n");
		printf("Enter '2' for subtraction\n");
		printf("Enter '3' for multiplication\n");
		printf("Enter '4' for division\n");
		printf("Enter '5' for squaring\n");
		printf("Enter '6' for cubing\n");
		printf("What operation would you like to preform? ");
		scanf_s("%d", &d);
		// using the user input run the correct operation 
		if (d == 1)
			add(a, b);
		else if (d == 2)
			subtract(a, b);
		else if (d == 3)
			multiply(a, b);
		else if (d == 4)
			divide(a, b);
		else if (d == 5)
			square(a);
		else if (d == 6)
			cube(a);
		else
			printf("\nPlease enter in a number between 1-6 or exit the program\n");

		printf("Would you like to run the program function again? "); //allows the user to run the program again without exiting
		scanf_s("%s", c, 100);
		printf("\n-----------------------------------------------------------------------------\n");

	}
	return 0; // ends the program
}
void add(float a, float b) // Function to add the user input and out the answer
{
	float result;
	printf("Enter your first number: ");
	scanf_s("%f", &a);
	printf("Enter your second number: ");
	scanf_s("%f", &b);
	result = a + b;
	printf("\nThe addition result is: %f\n", result);
}
void subtract(float a, float b) // Function to subtract the user input and output the answer
{
	float result;
	printf("Enter your first number: ");
	scanf_s("%f", &a);
	printf("Enter your second number: "); 
	scanf_s("%f", &b);
	result = a - b;
	printf("\nThe subtraction result is: %f\n", result);
}
void multiply(float a, float b) // Function to multiply the user input and output the answer
{
	float result;
	printf("Enter your first number: ");
	scanf_s("%f", &a);
	printf("Enter your second number: ");
	scanf_s("%f", &b);
	result = a * b;
	printf("\nThe multiplcation result is: %f\n", result);
}
void divide(float a, float b) // Function to divide the user input and output the answer
{
	float result;
	printf("Enter your first number: ");
	scanf_s("%f", &a);
	printf("Enter your second number (it cannot be 0): "); 
	scanf_s("%f", &b);
	result = (float)a / (float)b;
	if(b != 0) // Checks if the divisor in this case is not 0
		printf("\nThe division result is %f\n", result);
	else // of the divisor is 0 then it will display the error code
		printf("\nSorry the number cannot be divided by 0\n");
}
void square(float a)
{
	float result;
	printf("Enter the number you would like to square: ");
	scanf_s("%f", &a);
	result = a * a;
	printf("The squared result of %f is: %f\n", a, result);
}
void cube(float a)
{
	float result;
	printf("Enter the number you would like to cube: ");
	scanf_s("%f", &a);
	result = a * a * a;
	printf("The cubed result of %f is: %f\n", a, result);
}