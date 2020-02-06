#include<bits/stdc++.h>
using namespace std;

const int M = 1000;
int ipath[M][M]={0};

void printMazePath(int sr,int sc,int er,int ec,string path,int n,int c,vector<string> &v){
	if(sr==er and sc==ec){
		if(ipath[sr][sc]==1){
			c++;
		}
		if(c == n){
			v.push_back(path);
			goto lop;
			//return v;
			//"YES"<<endl<<path<<endl;
		}
		return;
	}

	if(sr>er or sc>ec){
		return;
	}

	if(ipath[sr][sc]==1){
		c++;
	}

	printMazePath(sr+1,sc,er,ec,path + "R",n,c,v);
	printMazePath(sr,sc+1,er,ec,path + "U",n,c,v);
}

int main(){

	int t; cin>>t;
	while(t--){

		int n; cin>>n;
		int er=INT_MIN,ec=INT_MIN;

		memset(ipath,-1,sizeof(ipath));
		for(int k=0;k<n;k++){
			int i,j; 
			cin>>i>>j;
			ipath[i][j]=1;
			er = max(i,er);
			ec = max(j,ec);
		}

		// for(int i=0;i<n;i++){
		// 	for(int i=0;i<n;i++);
		// 		ipath[i][j]=0;
		// }

		int c=0;
		vector<string> v;
		printMazePath(0,0,er,ec,"",n,c,v);
	
   lop: if(v.size()!=0){
			cout<<"YES"<<endl<<v[0]<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}