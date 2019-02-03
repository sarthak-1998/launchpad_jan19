#include<iostream>

using namespace std ;

void printPi(string str , string osf){
	if (str.length()==0){
		cout<<osf<<endl;
	}
	
	if(str.length()==1){
		cout<<osf + str[0]<<endl;
		return;
	}

	printPi(str.substr(2),osf + " 3.14 ");
	printPi(str.substr(1), osf + str[0]);

	return;

}

int main()
{
	return 0;
}
