#include<stdio.h>
#include<conio.h>

void main()
{
	int no=10;
	int *ptr;
	
	ptr=&no;
	
	printf("\n original value :%d",no);
	
	*ptr=25;
	
	printf("\n modified value :%d",no);
	
	getch();
}