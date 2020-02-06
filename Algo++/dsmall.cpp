#include<iostream>
using namespace std;

void unique(string str,string ans,string org){
	if(str.length()==0){
		if(ans < org){
			cout<<ans<<endl;
			return;
		}
	}

	for(int i=0;i<str.length();i++){
		string res = str.substr(0,i)+str.substr(i+1);
		unique(res,ans+str[i],org);
	}
}

int main() {
	string str;
	cin>>str;

	unique(str,"",str);
	cout<<str<<endl;
	return 0;
}