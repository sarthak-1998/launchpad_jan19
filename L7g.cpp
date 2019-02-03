#include<iostream>

using namespace std ;

void steps(int m , int n, int cr , int cc , string osf){

	if(cr==m and cc==n){
		return;
	}

	if (cr>m or cc>n){

		return;
	}
	
	steps(m,n,cr,cc+1 ,osf + 'H');
	
	steps(m,n,cr+1,cc,osf + 'V');
	
	cout<<endl;
	cout<<endl;
	int ans ;
	return ;

	

}


int main()
{
	cout<<steps(2,2,0,0,"");
	return 0;
}
