#include<iostream>
#include <math.h>
using namespace std;

void decimal(string s){
	int n = s.length();
	int num=0;
	int k=0;
	for(int i=n-1;i>=0;i--){
		num = num + (s[i]-'0')*pow(2,k++);
	}

	cout<<num<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		decimal(s);
	}
}