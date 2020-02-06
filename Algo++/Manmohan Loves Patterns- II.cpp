#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	
	cout<<"1"<<endl;	

	for(int i=2;i<=n;i++){
		cout<<i-1;
		for(int  j=0;j<i-2;j++){
			cout<<"0";
		}
		cout<<i-1<<endl;
	}

	return 0;
}