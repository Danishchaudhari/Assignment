#include <iostream>
using namespace std;

class calculator
{
	
	public:
		float add(float a,float b)
		{
			return a+b;
		}
		float sub(float a,float b)
		{
			return a-b;
		}
		float mul(float a,float b)
		{
			return a*b;
		}
		float div(float a,float b)
		{
			return a/b;
		}
};


int main()
{
	int num1,num2;
	float result;
	char op;
	
	calculator cal;
	
	cout<<"enter two number :";
	cin>>num1>>num2;
	
	cout<<"enter operator (+,-,*,/) :";
	cin>>op;
	
	if(op == '+')
	{
		result = cal.add(num1,num2);
		cout<<"sum is :"<<result;
	}
	else if(op == '-')
	{
		result = cal.sub(num1,num2);
		cout<<"sub is :"<<result;	
	}
	else if(op == '*')
	{
		result = cal.mul(num1,num2);
		cout<<"multiplication is :"<<result;	
	}
	else if(op == '/')
	{
		result = cal.div(num1,num2);
		cout<<"division is :"<<result;	
	}
	else
	{
		cout<<"Invaild operator";
	}
	
	return 0;
}
