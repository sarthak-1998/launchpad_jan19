#include<iostream>

using namespace std ;


int main()
{
	int *arr = new int[100];
	int n,t;//int arr[];
	for(int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){

			if (arr[j]>arr[j+1]){

				arr[j+1]=t;
				arr[j]=arr [j+1];
				arr[j+1]=t;
			}
		}
	}
	return 0;

}
