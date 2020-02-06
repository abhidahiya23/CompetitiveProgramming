#include<iostream>
using namespace std;

void camelCase(string str){

	char ch = str[0];
	string ans;

	ans = ch;
	for (int i = 1; i < str.length(); ++i){
		if(str[i]>='A' && str[i]<='Z' && str[i-1]>='A' && str[i-1]<='Z'){
			//ans = ans + " " + str[i] ;
			cout<<ans<<endl;
			ans = str[i];
		}else if(str[i-1]>='a' && str[i-1]<='z' && str[i]>='A' && str[i]<='Z'){
			//ans = ans + " " + str[i];
			cout<<ans<<endl;
			ans=str[i];
		}else{
			ans +=str[i];
		}
	}	

	cout<<ans<<endl;
}

int main(){
	string  str;
	cin>>str;
	camelCase(str);
	return 0;
}