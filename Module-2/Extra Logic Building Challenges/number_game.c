#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int main() 
{
    int number, guess, i;

    srand(1);  // Fixed seed for consistent testing (same number each time)
    number = rand() % 100 + 1;  // Generate number between 1 and 100

    printf("Guess the number between 1 and 100\n");

    for (i = 1; i <= 5; i++) 
    {
        printf("Attempt %d: ", i);
        scanf("%d", &guess);

        if (guess == number) 
        {
            printf("Correct! You win!\n");
            break;
        } 
        else if (guess < number) 
        {
            printf("Too low!\n");
        } 
        else 
        {
            printf("Too high!\n");
        }
    }

    if (guess != number) 
    {
        printf("Sorry, the number was %d.\n", number);
    }

    return 0;
}
