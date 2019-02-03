#include<iostream>
#include<string.h>

using namespace std ;

void readLine(char a[],int maxSize,char delim){
	int i=0;
	while(maxSize){

		a[i] =cin.get();
		if(a[i]==delim)
			break;
		i++;

		maxSize--;
	}
	a[i]='\0';
	cout<<a<<endl;

}


int main()
{
	// string s;
	// getline(cin,s);


	char str[100];
	readLine(str,100,'.');
	// cout<<str<<endl;

	return 0;
}
