#include<iostream>
#include<climits>
using namespace std;
/*int CountOnes(int n,string str){

    if(str.length()==0)

}
*/
string keycode[] = {".","#","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void NumberString(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }

    char ch = str[0];
    string res = str.substr(1);

    NumberString(res,ch+ans);

    if(str.length()>=2){
    int diff = (str[0]-97)+(str[1]-97);

    if(diff<=26){
        char ch = diff+97;
        string res = str.substr(2);
        NumberString(res,ch+ans);
    }}
}


void printPermutation(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }


    for(int i=0;i<str.length();i++){
        char ch = str[i];
        string res = str.substr(0,i)+str.substr(i+1);

        printPermutation(res,ans+str[i]);
    }

}
bool printSubsequence(int arr[],int n){
	if(n==0){
		return false;
	}

	int ch = arr[0];
	int x=0,y=0;
	if(x==y)
        return true;
    x += printSubsequence(arr,n);
	y += printSubsequence(arr,n-1);

}
/*oid printPer(string str1,string str2,string ans){

    if(str1.length()==0 || str2.length()==0){
        cout<<ans<<endl;
        return ;
    }

    char ch = str1[0];
    string res1 = str1.substr(1);
    for(int i=0;i<)
    char ch2 = str2[0];
    string res2 = str2.substr();

    printPer(res1,res2,ans+ch+ch2);

}*/
static int m1=0,m2=0;

int reduceToOne(int n){

    if(n==1){
        return 0;
    }

    int count1=INT_MAX,count2=INT_MAX,count3=INT_MAX;

    if(n%3==0)
        count3 = reduceToOne(n/3)+1;

    if(n%2==0)
        count2 = reduceToOne(n/2)+1;

    count1 = reduceToOne(n-1)+1;

    return min(count1,min(count2,count3));
}

int PerfectSquare(int n){

    if(n==1)
        return 1;

    int count = PerfectSquare(n-1)+1;

    return count;
}

int main(){
    //printPer("abc","def","");
    int arr[] ={1,2,3,5};
    cout<<printSubsequence(arr,4)<<endl;

    //printPermutation("abc","");
    return 0;
}
