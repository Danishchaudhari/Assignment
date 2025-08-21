#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
	int i, fact=1;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

void main()
{
	int num;
	
	printf("\n enter Number :");
	scanf("%d",&num);
	
	printf("\n factorial of Given Number is :%d",factorial(num));
	
	getch();
}