#include <iostream>
using namespace std;

int main(){
	string s; cin>>s;

	string ans;
	int n = s.length();
	for(int i=n-1;i>=0;i--){
		ans+=s[i];
	}
	cout<<ans;
}