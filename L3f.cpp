#include<iostream>

using namespace std ;

void maxSumSubArray(int a[],int n){

	int ms =0;
	int cs = 0;

	for (int i =0 ;i<n;i++ ){

		cs=cs + a[i];

		if(cs<0){
			cs=0;

		}
		if (cs>ms){

			ms= cs;
		}
	}
	cout<<ms;
}

int main()
{ int a[]= {-1,2,-4,6,3,-2,-1,6,-1};
maxSumSubArray(a,9);
	return 0;
}

