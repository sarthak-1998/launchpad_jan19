#include<iostream>

using namespace std ;

int cntBits(int n){
	int cnt =0;

	while(n){
		cnt+= n&1;
		n = n>>1;
	}	return cnt;
}

int main()
{ int n;
	cin>>n;
	//to tell odd and even in single lie without%
	//n&1 ? cout<<"odd" : cout<<"even" ;
	cout<<cntBits(n);
	
	return 0;
}
