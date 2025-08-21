#include<stdio.h>
#include<conio.h>

int checkpalindrome(char str[])
{
	int i,len=strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		if(str[i] != str[len-1-i])
		{
			return 0;
		}
	}
	return 1;
}

void main()
{
	char str[100];
	
	printf("\n enter a string :");
	scanf("%s",&str);
	
	if(checkpalindrome(str))
	{
		printf("\n palindrome string\n");
	}
	else
	{
		printf("\n not palindrome string\n ");
	}
	getch();	
}