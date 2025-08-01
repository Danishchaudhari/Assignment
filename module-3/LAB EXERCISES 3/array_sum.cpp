#include <iostream>
using namespace std;

int main()
{
	int num[5],i;
	float sum=0,avg;
	
	for(i=0;i<5;i++)
	{
		cout<<"enter Number "<<i+1<<":";
		cin>>num[i];
	}
	
	cout<<endl<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"Number is :"<<num[i]<<endl;
		sum += num[i];
	}
	
	avg = sum/5;
	
	cout<<endl<<endl;
	
	cout<<"sum is :"<<sum<<endl;
	cout<<"avg is :"<<avg<<endl;
	
	return 0;
}
