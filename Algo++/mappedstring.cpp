#include<iostream>
using namespace std;

void MappedString(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}

	char ch = str[0]-'0'+'A'-1;
	int ch_int = str[0]-'0'; 
	string res = str.substr(1);

	MappedString(res,ans+ch);
	if(res.length()>0){
		int val = ch_int*10 + res[0]-'0';
		if(val <= 26 ){
			char ch2 = val + 'A'-1;
			MappedString(res.substr(1),ans+ ch2);
		}
	}

}

int ValidateStack(int pushed[],int popped[]){
	stack<int> s;

	for(int i=0;i<n;i++){
		
	}
}
int main() {
	string s;
	cin>>s;

	MappedString(s,"");
	return 0;
}