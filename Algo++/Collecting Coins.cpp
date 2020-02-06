#include<bits/stdc++.h>
using namespace std;

int main(){

	int t; cin>>t;

	while(t--){

	int a,b,c,n; cin>>a>>b>>c>>n;

	// maximum coins
	int m = max(a,max(b,c));

	int level = 3*m-a - b - c;

	if(n-level<0){
		cout<<"NO"<<endl;
	}else if(level==n){
		cout<<"YES"<<endl;
	}else{
		n = n-level;
		if(n%3==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	}	
	return 0;
}