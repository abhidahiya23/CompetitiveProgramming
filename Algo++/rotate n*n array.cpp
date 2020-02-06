#include <iostream>
using namespace std;

/* 	 1  2  3  4
	 5  6  7  8
	 9 10 11 12
	13 14 15 16

 	 1  5  9 13
	 2  6 10 14
	 3  7 11 15
	 4  8 12 16
*/

int main(){

	int n,m;
	cin>>n;
	m=n;
	// input array
	int image[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>image[i][j];
		}
	}
	// transpose array
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			temp = image[j][i];
			image[j][i] = image[i][j];
			image[i][j] = temp;
		}
	}
	// reverse column-wise
	for(int i=0;i<n;i++){
		for(int j=0;j<m/2;j++){
			temp = image[j][i];
			image[j][i] = image[m-j-1][i];
			image[m-j-1][i] = temp;
		}
	}
	// display array
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<image[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	return 0;
}