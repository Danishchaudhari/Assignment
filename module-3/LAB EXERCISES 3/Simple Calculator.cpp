// Class for a Simple Calculator

#include <iostream>
using namespace std;

class calculator
{
	int no,a,b;
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
	calculator cal;
	
	float num,num1;
	
	cout<<"enter number1 :";
	cin>>num;
	
	cout<<"enter number2 :";
	cin>>num1;
	
	cout<<"addition is :"<<cal.add(num,num1)<<endl;
	cout<<"substraction is :"<<cal.sub(num,num1)<<endl;
	cout<<"multiplication is :"<<cal.mul(num,num1)<<endl;
	cout<<"division is :"<<cal.div(num,num1)<<endl;
	
	
	
	return 0;
}