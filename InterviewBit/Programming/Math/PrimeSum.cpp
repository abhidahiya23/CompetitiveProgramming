#include<iostream>
using namespace std;
const int n = 5;
int board[n][n]={0};

bool isSafe(int n,int board[][4],int row,int col){
    for(int i=0;i<row;i++)
        if(board[i][col])
            return false;

    int x = row;
    int y = col;
    while(x>=0 && y>=0){
        if(board[x--][y--])
            return false;
    }

    x = row;
    y = col;
    while(x>=0 && y < n){
        if(board[x--][y++])
            return false;
    }

    return true;
}

bool isPossible(int n,int x,int y){
    if(board[x][y]==1){
        return false;
    }

    if(x>n || y>n || x<0 || y<0)
        return false;

    return true;
}



bool KnightTour(int n,int steps,int x,int y){

    if(steps==n*n){
        return true;
    }

    int xstep[] = {2,2,2,2,-2,-2,-2,-2};
    int ystep[] = {-1,1,-1,1,-1,1,-1,1};

    for(int i=0;i<8;i++){
        if(isPossible(n,x,y)){
            board[x][y]=1;

            bool res = KnightTour(n,steps+1,xstep[i]+x,ystep[i]+y);

            if(res)
                return true;

            board[x][y]=0;
        }
    }
    return false;
}

int main() {

    cout<<KnightTour(n,0,0,0)<<endl;

	return 0;
}
