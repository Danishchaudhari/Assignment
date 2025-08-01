/*Write a C++ program that calculates the factorial of a number using recursion. */

#include <iostream>
using namespace std;

int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);	//recursive function call
	}
}

int main()
{
	int number,result;
	
	cout<<"enter a positive number :";
	cin>>number;
	
	if(number<=0)
	{
		cout<<"ERROR:please enter a positive number ! "<<endl;
	}
	else
	{
		result = factorial(number);
		cout<<"factorial is :"<<result;
	}
}