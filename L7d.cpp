#include<iostream>

using namespace std ;

int tiling (int n){

	if (n<4){
		return 1;
	}
	if (n==4){

		return 2;

	}

	return tiling(n-1) + tiling(n-4);
}


int main()
{
	cout<<tiling(8);
	//cout<<tiling(10);

	return 0;
}
