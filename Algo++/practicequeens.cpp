#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int n,vector<vector<int>> arr,int row,int col){

	for(int i=0;i<row;i++){
		if(arr[i][col])
			return false;
	}


	int r = row,c = col;

	while(r>=0 and c>=0){
		if(arr[r][c])
			return false;

		r--;
		c--;
	}

	r = row;
	c = col;

	while(r>=0 and c<n){
		if(arr[r][c])
			return false;

		r--;
		c++;
	}

	return true;
}

int CountNQueens(int n,vector<vector<int>> arr,int row){

	if(row == n){
		return 1;
	}

	int count = 0;


	for(int col=0;col<n;col++){
		if(isPossible(n,arr,row,col)){
			arr[row][col] = 1;

			count += CountNQueens(n,arr,row+1);

			arr[row][col] = 0;
		}
	}

	return count;

}

void printNQueens(int n,vector<vector<int>> arr,int row){
	if(row == n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]){
					cout<<"{"<<i+1<<"-"<<j+1<<"} ";
				}
			}
		}
		cout<<" ";
		return;		
	}

	for(int col=0;col<n;col++){
		if(isPossible(n,arr,row,col)){
			arr[row][col] = 1;

			printNQueens(n,arr,row+1);

			arr[row][col] = 0;
		}
	}

	return ;

}

int main(){

	int n;
	cin>>n;
	//int arr[n][n]={0};
	vector<vector<int>> arr;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j] = 0;
		}
	}
	printNQueens(n,arr,0);
	//cout<<cout<<CountNQueens(n,arr,0)<<endl;


	return 0;
}