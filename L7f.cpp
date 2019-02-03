#include<iostream>

using namespace std ;

int steps(int m , int n, int cr , int cc){

	if(cr==m and cc==n){
		return 1;
	}

	if (cr>m or cc>n){

		return 0 ;
	}

	int horizontalCount= steps(m,n,cr+1,cc);
	int verticalCount= steps(m,n,cr,cc+1);

	return horizontalCount+verticalCount;

}


int main()
{
	cout<<steps(3,4,0,0);
	return 0;
}
