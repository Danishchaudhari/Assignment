#include <stdio.h>
#include <conio.h>

int main() 
{
    int n, i, j, num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        num = 1;
        for (j = 0; j <= i; j++) 
		{
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
