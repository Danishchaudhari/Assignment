#include<stdio.h>
#include<conio.h>

void main()
{
	char str[200];
	
	int i=0,count=0;
	
	printf("\n enter sentense :");
	gets(str);
	
	while(str[i] != '\0')
	{
		if(str[i] == ' ')//space is char that why used single quote
		{
			count++;
		}
		i++;
	}
	
	printf("\n number of words :%d",count);
	
	getch();
}