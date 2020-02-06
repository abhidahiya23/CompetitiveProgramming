#include<iostream>
using namespace std;

void compression(string str){
    int l = str.length();
    int cl=1;
    for(int i=0;i<l;i++){
        if(str[i]!=str[i+1]){
            cout<<str[i]<<cl;
            cl=1;
        }else{
            cl++;
        }
    }
}

int main() {
    string str;
    cin>>str;

    compression(str);
	return 0;
}