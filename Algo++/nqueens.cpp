#include<iostream>
using namespace std;

bool isSafe(int board[][4],int row,int col,int n){

	for(int i=0;i<row;i++){
		if(board[i][col]){
			return false;
		}
	}

	int x = row;
	int y = col;

	while(x>=0 and y>=0){
		if(board[x][y]){
			return false;
		}
		x--;
		y--;
	}

	x = row;
	y = col;

	while(x>=0 and y<n){
		if(board[x][y]){
			return false;
		}
		x--;
		y++;
	}

	return true;
}

int count=0;

void NQueens(int board[][4],int row,int n){
    if(row==n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j])
                cout<<"Q";
                else
                    cout<<"_";
        }
        cout<<endl;

    }
    count++;
    cout<<"*************"<<endl;
    return;
    }

    for(int col = 0;col<n;col++){

        if(isSafe(board,row,col,n)){
            board[row][col]=1;

            NQueens(board,row+1,n);

            board[row][col]=0;
        }

    }
}

bool isPathSafe(char maze[][4],int row, int col, int n){

    if(col == n)
    if(maze[row][col+1]=='x')
        return false;

    if(maze[row+1][col]=='x')
        return false;

    return true;
}

bool ratInMaze(char maze[][4],int row,int n){
    if(row == n)
        return true;


    for(int col = 0; col<n;col++){

        if(isPathSafe(maze,row,col,n)){
            maze[row][col]=1;

            bool path = ratInMaze(maze,row+1,n);
            bool path1 = ratInMaze(maze,col+1,n);
            if(path||path1)
                return true;

            maze[row][col]=0;
        }
    }

    return false;
}
void printRatInAMaze(char maze[][4],int sol[][4],int sr,int sc,int er,int ec){
	if(sr==er and sc==ec){
            for(int i=0;i<er;i++){
        for(int j=0;j<ec;j++){
            if(maze[i][j])
                cout<<"Q";
                else
                    cout<<"_";
        }
        cout<<endl;

    }
    count++;
    cout<<"*************"<<endl;
    return;
	}

	if(sr>er or sc>ec){
		return;
	}

	if(maze[sr][sc]=='X'){
		return;
	}

	for(int i=0;i<sr;i++){

        ratInMaze(maze,sol,sr+1,sc,er,ec);
        ratInMaze(maze,sol,sr,sc+1,er,ec);
   }
}
int main(){

    int board[4][4] = {0};
    int n=4;
    //NQueens(board,0,n);
    //cout<<count;


    	char maze[][4] = {
     	{'0','0','0','0'},
     	{'0','0','0','X'},
     	{'0','0','X','0'},
     	{'0','0','0','0'},
     };

     int sol[4][4] = {0};

     cout<<printRatInAMaze(maze,sol,0,0,3,3)<<endl;

    return 0;
}
