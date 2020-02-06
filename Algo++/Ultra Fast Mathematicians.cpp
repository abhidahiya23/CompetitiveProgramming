//Ultra Fast Mathematicians
#include<iostream>
using namespace std;

void ultraFastMath(string str1,string str2){
	
	for(int i=0;i<str1.length();i++){
		if(str1[i]==str2[i]){
			cout<<"0";
		}else{
			cout<<"1";
		}
	}
	cout<<endl;
	
}

int main(){
	int t; cin>>t;

	while(t--){
	string str1,str2;
	cin>>str1>>str2;

	ultraFastMath(str1,str2);
	}

	return 0;
}