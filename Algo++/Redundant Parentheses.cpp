// Redundant Parentheses
#include <iostream>
#include <stack>
using namespace std;

bool checkDuplicate(string str){
	stack<int> s;

	for(int i=0;i<str.length();i++){
		char ch = str[i];
		if(ch!=')'){
			s.push(ch);
		}else{
			
			if(s.top()=='(')
				return true;

			while(s.top()!='(')
				s.pop();

			s.pop();
		}
	}

	return false;
}


int main(){

	int t;	cin>>t;
	while(t--){
		string str;	cin>>str;
		if(checkDuplicate(str)){
			cout<<"Duplicate"<<endl;
		}else{
			cout<<"Not Duplicates"<<endl;
		}
	}

	return 0;
}