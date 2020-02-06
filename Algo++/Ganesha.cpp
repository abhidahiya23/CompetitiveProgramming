#include <iostream>
using namespace std;

int main(){

	int n; cin>>n;

	char ganesh[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ganesh[i][j]=' ';
		}
	}

	for(int i =n/2;i<n;i++){
		ganesh[0][i]='*';
		ganesh[n-1][n-i-1]='*';
		ganesh[i][n-1]='*';
		ganesh[n-i-1][0]='*';
	}
	
	for(int i=0;i<n;i++){
		ganesh[i][n/2]='*';
		ganesh[n/2][i]='*';
	}


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ganesh[i][j];
		}
		cout<<endl;
	}

	return 0;
}