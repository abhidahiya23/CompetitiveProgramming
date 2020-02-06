#include<bits/stdc++.h>
using namespace std;

void subSequences(string str,string ans,set<string> &s){
	if(str.length()==0){
		if (s.find(ans) == s.end())
			s.insert(ans);
		return;
	}

	char ch = str[str.length()-1];
	string res = str.substr(0,str.length()-1);
	subSequences(res,ans,s);
	subSequences(res,ch+ans,s);

}
int main() {
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		set<string> s;
		subSequences(str,"",s);

		set<string>::iterator it;  
		for (auto it = s.begin(); it != s.end(); it++) 
			cout << *it << endl;
	}
	return 0;
}