#include<iostream>
using namespace std;

void minNumber(string n){
	string ans="";
	for(int i=0;i<n.length();i++){
		int num = n[i]-'0';
		int invert = 9-num;
		if(invert<num && invert!=0){
			ans += to_string(invert);
		}else{
			ans += to_string(num);
		}
	}

	cout<<ans<<endl;

}

int main(){

	string n;
	cin>>n;

	minNumber(n);

	return 0;
}