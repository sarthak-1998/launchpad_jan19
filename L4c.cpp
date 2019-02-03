#include<iostream>
#include<string.h>


using namespace std ;

bool isPalindrome(char a[]){

	int i=0,j=strlen(a)-1,flag= 0;
	while(j>i){
		if (a[i]!=a[j]){

			flag = 1;
			break;
		}
		i++;
		j--;

	}
	if (flag==1){
		cout<<"not";
		return -1;
	}
	else{
		cout<<"yes"<<endl;

		cout<<a<<endl;
		return 0;
	}

}


int main()
{
	char p[100];
	cin.getline(p,100);

	isPalindrome(p);
	return 0;
}
