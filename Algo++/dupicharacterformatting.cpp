#include<iostream>
using namespace std;

int count=0;

void Subsequences(string str,string ans){
    if(str.length()==0){
        cout<<ans<<" ";
        count++;
        return;
    }

    char ch = str[0];
    string res = str.substr(1);

    Subsequences(res,ans+ch);
    Subsequences(res,ans);
}
int main() {
    string str;
    cin>>str;

    Subsequences(str,"");
    cout<<endl<<count<<endl;
	return 0;
}
