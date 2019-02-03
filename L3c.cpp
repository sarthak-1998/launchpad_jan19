#include<iostream>

using namespace std ;
int main()
{

	int a[]={1,3,4,5,7};
	int b[]={2,4,7,9,10,12,14};
	int c[100];
	int i=0;
	int j=0;
	int k=0;

	for(i=0;i<100;i++){
		if(a[j]>=b[k]){
			c[i]=b[k];
			k++;

		}
		else {
		 	c[i]=a[j];
		 	j++;
		}

		cout<<c[i];
	}

	
	
	return 0;
}
