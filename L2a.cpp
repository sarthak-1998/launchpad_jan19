#include<iostream>
#include <conio.h>

using namespace std ;
int main()
{
	
	char ch ;
	int sum=0;
	int cha =0;
	ch = cin.get();

	while (ch!='\n')
	 {
	 	if (ch =='n' || ch=='w')
	 		cha = 1;

	 	else if (ch=='s'|| ch =='e' )
	 		cha =-1;
	 	else 
	 		cha=  0;

	 	sum = sum + cha;
	 	cout<<ch;
	 	cin.get();
	 }
}