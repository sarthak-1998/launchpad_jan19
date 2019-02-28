#include<iostream>

using namespace std ;

int nThFib(int n){

	if(n==0 or n==1){
		return n;
	}
	else {
		return nThFib(n)+ nThFib(n-1);
	}
}
void  PrintNo(int n){

	if(n%2==1){
		cout<<n<<endl;
	}
	PrintNo(n-1);

	if (n%2==0){
		cout<<n<<endl;
	}
}

int printPower (int a,int n){
	int ans=1;
	if(n==0){

		return 1;
	}

	
	return a* printPower(a,n-1);

}



int main()
{
	//PrintNo(10);

	int ans=printPower(5,3);
	cout<<ans;
	return 0;
}
