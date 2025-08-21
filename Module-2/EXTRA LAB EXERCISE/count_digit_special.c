#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	
	int i=0,vowel=0,consonants=0,digit=0,special=0;
	
	printf("\n enter string :");
	scanf("%s",&str);
	
	while(str[i] != '\0')
	{
		char ch=str[i];
		
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		{
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U')
			{
				vowel++;
			}
			else
			{
				consonants++;		
			}	
		}
		else if(ch>='0' && ch<='9')
		{
			digit++;
		}
		else
		{
			special++;
		}
		i++;	
	}	
	
	printf("\n number of vowel :%d\n",vowel);
	printf("\n number of consonants :%d\n",consonants);
	printf("\n number of digit :%d\n",digit);
	printf("\n number of special :%d\n",special);
	
	getch();
}
