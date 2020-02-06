// Hollow Diamond Pattern(Pattern 6)
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	char Diamond[n][n];
	memset(Diamond,' ',sizeof(Diamond));

	int c= (n-1)/2;
	//top-left
	for(int i=0;i<=c;i++){
		for(int j=0;j<=c;j++)
			if(i+j<=c)
				Diamond[i][j]='*';
	}
	//bottom-right
	for(int i=c;i<=n;i++){
		for(int j=c;j<=n;j++)
			Diamond[i][j]=Diamond[n-i-1][n-j-1];
	}
	//bottom-left
	for(int i=c+1;i<=n;i++){
		for(int j=0;j<c;j++)
			Diamond[i][j]=Diamond[n-i-1][j];
	}
	// top-right
	for(int i=0;i<=c;i++){
		for(int j=c;j<n;j++)
		Diamond[i][j] = Diamond[i][n-1-j];

	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<Diamond[i][j]<<"\t";
		}
		cout<<endl;
	}


	return 0;
}