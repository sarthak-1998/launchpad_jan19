#include<iostream>

using namespace std ;

int binarySearch(int n){

	int s=0;
	int e =n;

	int ans =-1;

	while(s<=e){

		int mid = (s+e )/2;
		if (mid*mid==n){

			//cout<<"element at "<<mid<<endl;
			return mid;
			
		}
		else if (mid*mid<n){
			ans=mid;
			s=mid +1;
		}
		else{

			e = mid - 1;
		}
	}
	return ans;
}

int main()
{
// 	int a[]={1,2,3,4,5,6,7,8,9};
// 	int key;
// 	cin >>key;

	int r= binarySearch(25);
	cout<<r;
	return 0;
}
