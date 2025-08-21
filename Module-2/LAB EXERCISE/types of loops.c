#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	
	//for loop
	printf("\n using for loop \n");
	for(i=1;i<=10;i++)
	{
		printf("%d",i);
	}
	
	//while loop
	printf("\n\n using for while \n");
	i=1;
	while(i<=10)
	{
		printf("%d",i);
		i++;
	}
	
	//do while loop
	printf("\n\n using for do while loop \n");
	i=1;
	do
	{
		printf("%d",i);
		i++;
	}while(i<=10);
	
	
	
	getch();
}