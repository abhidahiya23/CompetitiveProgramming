// Strings-isPalindrome
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

void isPalindrome(string str){
	int l = str.length();
	for(int i=0;i<l;i++){
		if(str[i]!=str[l-i-1]){
			cout<<"false"<<endl;
			return;
		}
	}

	cout<<"true"<<endl;

}

int main(){

	string str;
	cin>>str;

	isPalindrome(str);


	return 0;
}