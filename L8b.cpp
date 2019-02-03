#include "iostream"

using namespace std;

bool findPath(char maze[][10],int i,int j, int m, int n){

	//goal reached
	if (i==m and j==n){
		return true;
	}

	// out of bounds
	else if(i>m or j > n){
		return false;
	}

	//X case
	else if(maze[i][j]=='X'){
		return false;
	} 

	bool way = findPath(maze,i+1,j,m,n){
		if (way){
			return true;
		}
	}

	way = findPath(maze,i,j+1,m,n)
}

int main(){


	return 0;
}