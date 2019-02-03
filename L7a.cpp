
#include<iostream>

using namespace std ;


void recursivePrint(string str ,string osf){

	if (str.length()==0){
		cout<<osf<<endl;
		return;
	}
	char ch = str[0];
	string ros= str.substr(1);
	recursivePrint(ros,osf+ch);
	recursivePrint(ros,osf);

}


int main()
{
	recursivePrint("abcd","");
	return 0;
}
