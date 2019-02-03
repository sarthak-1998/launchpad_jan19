#include<string.h>
#include<iostream>

using namespace std ;

bool isPermutation(char a[],char b[]){

	int add;

	int ar[30]={0};
	int ms= strlen(a);
	for (int i=0;i<ms;i++)
	{ 
		add= a[i] -'a';
		ar[add]++;
		add=b[i] -'b';
		ar[add]--;


	}

	for(int i=0;i<27;i++){

		if(ar[i]!=0){
			return false;
		}
	}
	return true;

}


int main()
{
	
	return 0;
}
