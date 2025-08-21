#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse(char str[])
{
	int i,len;
	char temp;
	
	len=strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
}

void main()
{
	char str[100];
	
	printf("\n enter a string :");
	scanf("%s",&str);
	
	reverse(str);
	
	printf("\n reverse string : %s\n ",str);
	
	getch();
}