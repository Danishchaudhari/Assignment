#include <iostream>
using namespace std;

int main()
{
	int no,i,ans;
	
	cout<<"the multiplication table of a given number :";
	cin>>no;
	
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		cout<<no<<"*"<<i<<"="<<ans<<endl;
	}
	
	
	return 0;
}