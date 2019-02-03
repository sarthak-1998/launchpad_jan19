#include<iostream>

using namespace std ;
int main()
{

    int n;
    cin>>n;
    // int sum = 0;
    // for(int i = 1;i<n+1;i++)
    // {

    //     sum+=i;

    // }
    // cout<<sum;
    int hn = (n+1)/2;
    for (int i = 1 ; i<=n ;i++)
    {

    	for (int j= 1;j<=n ; j++)
    	{
    		if (i==hn || j==hn || ( i==1&&j>hn) || (i==n && j<hn) || (i<hn && j==1) || (i>hn && j == n)) cout<<"*";
    		else cout <<" ";

    	}
    	cout <<endl;
    }
}
