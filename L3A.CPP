#include<iostream>

using namespace std ;
int l_search(int a[],int n , int key){
	for(int i=0;i<n;i++){
		if (a[i]==key){
			return i;

		}
	}
	return -1;

}

int main()
{
	int a[10];
	int key ;
	cin>>key;
	int n;
	cin>> n;
	for(int i=0;i<n;i++)
		cin>>a[i];

	int b= l_search(a,n,key);
	if (n!=-1)
		cout<<"no. found at "<<b;

	
	return 0;
}
