#include <stdio.h>
#include <conio.h>

int main() 
{
    int num1, num2;
    char op;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);
    
    printf("\n Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    
    printf("\n--- Result ---\n");

    switch(op) 
	{
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
        	
            if(num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;
            
        case '%':
    
            if(num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Error\n");
            break;
            
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
