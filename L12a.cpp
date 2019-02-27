#include<iostream>

using namespace std ;

void insertionSort( int arr[] ,int n){

	for(int i = 0; i<n; i++){

		for (int j=i;j<n ;j++){

			if (arr[i]> arr[j]){
				int temp = arr[j];
				arr[j]= arr[i];
				arr[i]= temp;
			}
		}
	}
}


int main()
{
	int ar[10]={4,5,3,0,7,9,2,2,1,6};
	insertionSort(ar,10);

	return 0;
}

