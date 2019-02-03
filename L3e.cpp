#include<iostream>

using namespace std ;

void printSubArray(int a[],int n){

	for(int i=0;i<n;i++){

		for(int j=i;j<n;j++){

			for(int k=j;k<j+i;k++){
				cout<<a[k]<<"\n";

			}

		}
	}
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	//int n;
	//cin>>n;

	printSubArray(a,10);

	return 0;
}

