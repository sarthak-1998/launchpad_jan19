#include<iostream>

using namespace std ;

int conDtB(int n){

	int ans = 0;
	int p=1;

	for(;n>0;n=n/2)
	{
		int ld = n%2;
		ans = ans + (ld*p);
		p*=2;

	}
	cout<<ans;
	return 0 ;
}
int main()
{
	int n;
	cin>>n;
	conDtB(n);
	
	return 0;
}
