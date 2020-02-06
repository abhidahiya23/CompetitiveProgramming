#include<iostream>
using namespace std;

char Frequency(string str){
    char arr[26]={0};
    for(int i=0;i<str.length();i++){
        arr[str[0]]++;
    }
    for(int i=0;i<26;i++)
        cout<<arr[i];

    return arr[0];
}
int main() {
    string str;
    cin>>str;

    cout<<Frequency(str)<<endl;
	return 0;
}
