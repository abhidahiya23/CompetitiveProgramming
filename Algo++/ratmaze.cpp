#include<iostream>
using namespace std;
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int c =1;
char arr[25][25];
int sol[25][25];
void Maze(char arr[][25],int sol[][25],int sr,int sc,int er,int ec){
	if(sr==er and sc==ec and c==1){
		sol[sr][sc] = 1;
		for(int i=0;i<=sr;i++){
			for(int j=0;j<=sc;j++)
				cout<<sol[i][j]<<" ";
			cout<<endl;
		}
		c=0;
		//cout<<"##############"<<endl;
		return ;
	}

	if(sr>er || sc>ec)
		return;

	if(arr[sr][sc]=='X'||arr[sr][sc]=='x')
		return;
	
	sol[sr][sc] = 1;

	Maze(arr,sol,sr,sc+1,er,ec);
	Maze(arr,sol,sr+1,sc,er,ec);

	sol[sr][sc] = 0;

}

int main(){
	sync;

	int n,m;
	cin>>n>>m;

	//char arr[n][25];

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];

	//int sol[n][4]={0};
	 for(int i=0;i<n;i++)
	 	for(int j=0;j<m;j++)
	 		sol[i][j]=0;

	Maze(arr,sol,0,0,n-1,m-1);
	return 0;

}