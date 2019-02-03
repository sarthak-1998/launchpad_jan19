#include<iostream>

using namespace std ;

int binarySearch(int a[],int key,int n){

	int s=0;
	int e =n-1;

	while(s<=e){

		int mid = (s+e )/2;
		if (a[mid]==key){

			cout<<"element at "<<mid;
			return mid;
		}
		else if (a[mid]<key){

			s=mid +1;
		}
		else{
			e = mid - 1;
		}
	}
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int key;
	cin >>key;

	binarySearch(a,key,9);
	return 0;
}
