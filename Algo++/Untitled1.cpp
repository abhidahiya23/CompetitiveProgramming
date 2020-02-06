#include<iostream>
#include<climits>
using namespace std;

char Frequency(string str){
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        arr[str[i]-97];
    }
    char ch = arr[0]+'a';
    int m=arr[0];
    for(int i=1;i<26;i++){
        if(arr[i]>arr[0]){
            m = arr[i];
            ch = arr[i] + 'a';
            }
    }

    return ch;
}
int main() {
    string str;
    cin>>str;

    cout<<Frequency(str)<<endl;
	return 0;
}
