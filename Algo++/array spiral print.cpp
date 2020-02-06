#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	cin>>n>>m;

	int arr[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int i=0,j=0;
	int count=0;
	int pv = n*2 + m*2-4;
	while(pv){
		cout<<arr[i][j]<<" ";
		if(i>=j && i<n-1){
			i++;
		}else if(i==n-1 && j<i){
			j++;
		}else if(i<=j && i >0){
			i--;
		}else if(i==0 && j>=i){
			j--;
		}

		count++;

		if(i==1 && j==2 || count==16){
			break;
		}

		if(pv==0){
			if(n-2>1 && m-2>1){
				n=n-2;
				m=m-2;
				pv = n*n + m*m - 4;
			}else if(n-2>1 && m-2>0){
				n=n-2;
				m=m-2;
				pv = n*n + m*m - 4;
			}
		}

	}


}