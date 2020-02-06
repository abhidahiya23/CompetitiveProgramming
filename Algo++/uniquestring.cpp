#include<iostream>
using namespace std;

bool check(string str,char ch){
	for(int i=0;i<str.length();i++){
		if(str[i]==ch)
			return false;
	}

	return true;
}

string unique(string str,string ans){
	if(str.length()==0){
		return ans;
	}

	char ch = str[0];
	string res = str.substr(1);

	if(check(ans,ch)){
		return unique(res,ans+ch);
	}else{
		return unique(res,ans);
	}

}

int main() {
	string str;
	cin>>str;

	str = unique(str,"");
	cout<<str<<endl;
	return 0;
}