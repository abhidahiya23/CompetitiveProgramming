#include<iostream>
using namespace std;

string Moveallx(string str){
    if(str.length()==0)
        return "";

    char ch = str[0];
    string res = str.substr(1);

    string rs=Moveallx(res);

    if(ch=='*')
        return rs+ch;
    else
        return ch+rs;
}



void printSubsequence(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }

    char ch = str[0];
    string res = str.substr(1);
    printSubsequence(res,ans+ch);
    printSubsequence(res,ans);
}

void printPermutation(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }

    for(int i =0 ;i<str.length();i++){
        char ch = str[i];
        string res = str.substr(0,i)+str.substr(i+1);
        printPermutation(res,ans+ch);
    }

}
int main(){

    //cout<<Moveallx("****a*b*c*d***ef**")<<endl;
    //printSubsequence("abc","");
    printPermutation("abc","");
    return 0;
}
