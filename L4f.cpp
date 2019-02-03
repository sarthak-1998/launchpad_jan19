#include<iostream>

using namespace std ;


int main()
{ 	int n = 8;
	int m=1;
	int j;
	char arr[25][25] = {0};
	for(int i=0 ; i<n;i++){
		for(j = 0; j<n;j=j+2){

			arr[i][j]='|';
			//cout<<arr[i][j]<<" ";
		}
		
		if (i==n-1 && j==m){
			arr[i][j]='-';
			m=m+4;
		}
		else if(i==0 && (j+1)%4==0){
			arr[i][j]='-';
		}
		cout<<endl;
	}

	for(int i=0 ; i<n;i++){
		for(int j = 0; j<n;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
