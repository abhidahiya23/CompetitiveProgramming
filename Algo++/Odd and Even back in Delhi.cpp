#include<iostream>
using namespace std;

void check(int n){
	int e=0,o=0;
	while(n){
		int digit = n%10;
		if(digit&1){
			o+=digit;
		}else{
			e+=digit;
		}

		n/=10;
	}
	if(e%4==0 || o%3==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		check(n);
	}
}