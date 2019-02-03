#include<iostream>

using namespace std ;

void PrPrime(int n)
{

	int i;

	for(i = 3;i<n;i++)
	{
	int fl=0;

		for (int j=2;j<i-1;j++ ){
			if (i%j==0){
				fl=1;break;
			}

		}
		if (fl==0){
		cout<<i;
		cout<<endl;


		}


	}


	
	//cout<<i;
	//return 0;
}
int main()
{

int n;
cin>>n;
cout<<"1\n"<<"2\n";
PrPrime(n);

return 0;
	
}
