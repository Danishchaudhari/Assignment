#include <iostream>
using namespace std;

int main()
{
	int mark,grade;
	
	cout<<"enter Mark :";
	cin>>mark;
	
	if(mark >= 80)
	{
		cout<<"A grade";
	}
	else if(mark >= 65)
	{
		cout<<"B grade";
	}
	else if(mark >= 55 )
	{
		cout<<"c grade";
	}
	else if(mark >= 40)
	{
		cout<<"D grade";
	}
	else
	{
		cout<<"fail";
	}
	
	
	return 0;
} 