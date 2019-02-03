#include "iostream"

using namespace std;

bool isSafe(int board[][10],int n, int i, int j){
	for(int x=0;x<i;x++){
		if(board[x][j]==1){
			return false;
		}
	}

	int x=i , y=j;
	while(x>=0 and y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}

	x=i,y=j;
	while(x>=0 and y<n){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y++;

	}
	return  true;

}


void nQueens(char board[][10],int i ,int n){




	if (i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){

				cout<<board[i][j];
			}

		cout<<"unique board found"<<endl;
		return;
		}
	}

// 	else if(i>n and j>n)
// 		return ;

// 	bool place =(maze,i ,n){
// 		if(maze[i][j]=)
// 	}


// 	bool way = nQueens(maze,curr+1,n){
// 		if(way)
// 			return true;
// 	}

// 	way = n
// }

// bool isSafe(char board[][10],int n , int i , int j){

	
// 		if(board[i][]=='1' or board[][j]=='1' or board[i+1][j-1]=='1' or board[i-1][j-1]=='1'   ){
// 			return false;
// 		}

// 		else return true;
}

int main(){


	return 0;
}