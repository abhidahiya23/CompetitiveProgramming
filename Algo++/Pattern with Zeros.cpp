#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	
	cout<<"1"<<endl;	

	for(int i=2;i<=n;i++){
		cout<<i<<"\t";
		for(int  j=0;j<i-2;j++){
			cout<<"0"<<"\t";
		}
		cout<<i<<endl;
	}

	return 0;
}