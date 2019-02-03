#include<iostream>
#include<string.h>

using namespace std ;


int main()
{
	// char a[100]={'a','b','c','d','\0'};
	// cout<<a<<endl;
	// char b[]="Hello World!";
	// cout<<sizeof(b)<<endl;
	// cout<<b<<endl;

	// char c[100];
	// cin.getline(c,100,'.');
	// cout<<c<<endl;

	// cout<<strlen(c)<<endl;

	char d[100];
	int m,ms=0;
	char e[100];
	int n;
	cin>>n;
	cin.get();

	while (n){

	cin.getline(d,100);
	cout<<strlen(d)<<endl;

	m = strlen(d);
	if (m>ms){
		ms=m;
		strcpy(e,d);
	}
	n--;


	}
	// cout<<d<<endl;
	cout<<ms<<endl;
	cout<<e;

	return 0;
}
