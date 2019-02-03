#include<iostream>

using namespace std ;

int stairCount(int n,int k){

	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	//return stairCount(n-1) +stairCount(n-2); 
	int ans=0;
	for (int i = 1; i<=k;i++ ){

		ans+= stairCount(n-i,k);
	}
	return ans;
}

int main()
{
	cout<<stairCount(5,2);
	return 0;
}
