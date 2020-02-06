#include<iostream>
using namespace std;

void Parenthes(int r,int l,int n,string ans){
	if(l==n and r ==n){
		cout<<ans<<endl;
		return;
	}

	if(r<n)
		Parenthes(r+1,l,n,ans+"(");
	if((r-l)>=1 and l<n)
		Parenthes(r,l+1,n,ans+")");
	
}

int main(){

	int n;
	cin>>n;

	Parenthes(0,0,n,"");
	return 0;

}