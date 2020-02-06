#include<iostream>
using namespace std;

int main(){
	int n ; cin>>n;

	string f;
	string mid;
	for(int i=1;i<n-1;i++){
		f = f + "*";
		mid = mid + " ";
	}

	f = "*"+f+"*";
	mid = "*"+mid+"*";

	for(int i= n-1;i>=0;i--){
		for(int space=i;space>=0;space--){
			cout<<" ";
		}
		if(i==n-1||i==0){
			cout<<f<<endl;
		}else{
			cout<<mid<<endl;
		}
	}

	return 0;
}