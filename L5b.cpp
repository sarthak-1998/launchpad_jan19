#include<iostream>

using namespace std ;

// void Transformation(int a[4][4]){
// 	int n= 4;

// 	for (int i=0;i<n;i++)
// 	{

// 		for (int j=0;j<n;j++){

// 			cout << a[n-i-1][j]<<" , ";
// 		}
// 		cout<<endl;
// 	}
// }

void stairCaseSearch(int a[][4],int n, int key){

	int i=0,j=n;
	do
	{
		cout<<a[i][j];
		if (a[i][j]==key){

			cout<<"found at"<<i<<j;
			break; 
		}

		else if (a[i][j]>key){

			j--;
			
		}

		else if (a[i][j]<key){

			i++;
		}

		else cout<<"not found";
		/* code */
	} while ((a[i][j]!=key));

}
int main()
{

	int a[4][4]={{1,2,3,4,},{4,5,6,7},{6,7,8,9},{9,1,2,3}};

		stairCaseSearch(a,4,5);

	// Transformation(a);
	 return 0;
}
