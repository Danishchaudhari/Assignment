#include <iostream>
using namespace std;

int a = 10;

int display()
{
	int x=100;
	cout<<"inside function x:"<<x<<endl;
}

int main()
{
	int b = 20;
	cout<<"local variable is :"<<b<<endl;
	cout<<"global variable is :"<<a<<endl;
	
	display();
	
	//cout<<"x :"<<x;		so,x is local variable not use the out side the method
	
	
	return 0;
}