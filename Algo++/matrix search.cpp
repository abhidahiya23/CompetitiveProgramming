#include<iostream>
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

	int element;
	cin>>element;
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==element){
				flag =1;
				break;
			}
		}
	}

	if(flag)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;



	return 0;
}