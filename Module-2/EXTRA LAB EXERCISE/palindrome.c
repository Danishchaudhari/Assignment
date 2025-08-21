#include<stdio.h>
#include<conio.h>

int ispalindrome(int num)
{
	int reversed=0,original=num,reminder;
	
	while(num!=0)
	{
		reminder=num%10;
		reversed=reversed*10+reminder;
		num/=10;
	}
	
	if(original==reversed)
		return 1;
	else
		return 0;
	
	
}

void main()
{
	int no;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	if(ispalindrome(no))
		printf("%d is palindrome number \n",no);
	else
		printf("%d is not palindrome number \n",no);
	
	getch();	
} 