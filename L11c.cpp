#include<iostream>
#include<stack>

using namespace std ;

bool isParanthesis(string a){
	

	stack<char> test;
	for (int i=0 ; a[i]!='\n';i++){
	if(a[i]=='(')
		test.push('(');
	if(a[i]==')')
		test.pop('(');
}
	if (a[i]){
		return false;
	}
	else 
		return true;

}

bool isRedundant(char *in){

	stack<char> test;
	for (int i=0 ; a[i]!='\n';i++){
	if(a[i]=='(')
		test.push('(');
	if(a[i]==')')
		test.pop('(');
}
	if (a[i]){
		return false;
	}
	else 
		return true;
}


int main()
{
	return 0;
}
