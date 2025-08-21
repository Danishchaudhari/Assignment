#include <stdio.h>
#include <conio.h>

int main()
{
    int numbers[10];
    int i, j, temp;
    int max, min;

    printf("Enter 10 integers:\n");
    
    for (i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = min = numbers[0];

    for (i = 1; i < 10; i++) 
	{
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }
    

    for (i = 0; i < 9; i++) 
	{
        for (j = 0; j < 9 - i; j++) 
		{
            if (numbers[j] > numbers[j + 1]) 
			{
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", numbers[i]);
    }

    return 0;
}
