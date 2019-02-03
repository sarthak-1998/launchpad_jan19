#include<iostream>

using namespace std ;

void printsum(int a[],int n,int s){
	int sum=0;
	for(int i=0;i<n;i++){

		for(int j=i+1;j<n;j++){
			if(s==(a[i]+a[j])){
				sum++;
				cout<<a[i]<<" and "<<a[j]<<"\n";

			}

		}
	}
}
int main()
{ int a[100];
	int n,s;
	cin>>n>>s;
	for (int i = 0;i<n;i++)
		cin>>a[i];

	printsum(a,n,s);


	return 0;
}

