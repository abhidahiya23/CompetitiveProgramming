#include <iostream>
using namespace  std;

int main(){

	int n; cin>>n;
	n = 2*n;
	int pascal[n][n]={0};
	int a = n/2;

	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
			pascal[i][j]=0;
			//cout<<pascal[i][j]<<" ";
		}
		//cout<<endl;
	}

	pascal[0][a]=1;
	int s = a-1;
	int e = a+1;
	for(int i=1;i<n/2;i++){
		for(int j=s;j<=e;j++){
			pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j+1];
		}
		s--;
		e++;
	}

	for(int i=0;i<n/2;i++){
		//cout<<" ";
		for(int j=0;j<n;j++){
			if(pascal[i][j])
				cout<<pascal[i][j];
			 else
			 	cout<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}