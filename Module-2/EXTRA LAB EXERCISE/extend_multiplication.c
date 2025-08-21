#include <stdio.h>
#include <conio.h>

int main() 
{
    int num, range, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Enter the range (e.g., 10 for up to 10 times): ");
    scanf("%d", &range);

    printf("Multiplication Table of %d up to %d:\n", num, range);
    
    for (i = 1; i <= range; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
