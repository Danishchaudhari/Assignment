#include <stdio.h>
#include<conio.h>
int main() 
{
    int num1, num2;
    char op;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Result ---\n");

    if (op == '+') 
	{
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    } 
    else if (op == '-') 
	{
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    } 
    else if (op == '*') 
	{
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    } 
    else if (op == '/') 
	{
        if (num2 != 0)
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    } 
    else if (op == '%') 
	{
        if (num2 != 0)
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        else
            printf("Error: Modulus by zero is not allowed.\n");
    } 
    else 
	{
        printf("Invalid operator '%c'. Please use +, -, *, /, or %%.\n", op);
    }

    return 0;
}
