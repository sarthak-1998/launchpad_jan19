#include<iostream>

using namespace std ;

int findLastBit(int n){
	int p=0;
	//for(int i=0;i<n;i++)
	while{

	}

}

void findUnique(int a[],int n){
	int ans =0;
	for (int i=0;i<n;i++){
		ans= ans^a[i];
	}
	int pos = findLastBit(ans);

	int n1=0;
	int m = (1<<pos);

	for (int i=0;i<n;i++){
		if ((a[i]&m)>0){
			n1= n1^a[i];
		}
	}
	n2= ans ^ n1;
}

int main()
{

	
	return 0;
}
