#include "iostream"

using namespace std;

void permute(char *a,int i){

//base case
if (a[i]=='\0'){
	cout<<a<<endl;
	return;
}	
//rec case

for(int j=i;a[j]!='\0';j++){
	swap(a[i],a[j]);
	permute(a,i+1);

}
}

int main(){


	return 0;
}