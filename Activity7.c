#include <stdio.h>

extern int add_asm(int a, int b);
extern int sub_asm(int a, int b);
extern int imul_asm(int a, int b);

int main()
{
    // Print Welcome Message
    printf("My Simple Calculator Using Assembly");

    // Get 1 operand from User
    char operand;
    printf("\nPlease enter the operand: ");
    scanf_s("%c", &operand, 1);

    // Get 2 numbers from the User
    int number1 = 0;
    int number2 = 0;
    printf("\nPlease enter the first number: ");
    scanf_s("%d", &number1);
    printf("\nPlease enter the second number: ");
    scanf_s("%d", &number2);

    // Call the Assembly language routine & print the calculator result back to the console
    if (operand == '+')
    {
        printf("Addition result is %d\n", add_asm(number1, number2));
    }
    else if (operand == '-')
    {
        printf("Subtraction result is %d\n", sub_asm(number1, number2));
    }
    else if (operand == '*')
    {
        printf("Multiplication result is %d\n", imul_asm(number1, number2));
    }
    else
    {
        printf("Error: Invalid operand\n");
    }

    // Return all ok from this program
    return 1;
}