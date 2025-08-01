#include <iostream>
using namespace std;

int main()
{
	int i,j,a[2][2],b[2][2],result[2][2];
	
	cout<<"enter frist matrix 2*2 "<<endl;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"element ["<< i <<"] ["<< j <<"] : ";
			cin>>a[i][j];
		}
	}
	
		
	cout<<"enter second matrix 2*2 "<<endl;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"element ["<< i <<"] ["<< j <<"] : ";
			cin>>b[i][j];
		}
	}
	
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
	
		
	cout<<"After addition Result matrix "<<endl;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<result[i][j] <<"\t";
			
		}
		cout<<endl;
	}
	
	return 0;
	
	
}
