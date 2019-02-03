#include<iostream>
#include<string.h>

using namespace std ;

// 
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

void printAnagramSubstring(string text , string pat){

	int t[256];
	int p[256];
	int n= text.
}

int main()
{
	char a[5]; 
	char b[5];
	cin.getline(a,5);
	cin.getline(b,5);

	int k = isPermutation(a,b);



	return 0;
}
