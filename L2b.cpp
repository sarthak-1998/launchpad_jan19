#include<iostream>

using namespace std ;
int main()
{

	int n,i;
	cin>>n;

	for(i = 0;i<n;i++)
	{
		if((i*i)>n)
			{ i--;break;}
	}
	cout<<i;
	return 0;
}
