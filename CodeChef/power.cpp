#include<iostream>
using namespace std;

int power(int n, int p){
    if(n==0)
        return 1;

    int recursionResult = power(n,p-1);
    return n*recursionResult;
}

bool isSorted(int arr[],int n){
    if(n==1){
        if(arr[1]>arr[0])
            return true;
        else
            return false;
    }

    if(arr[n-1]>arr[n-2] && isSorted(arr,n-1))
        return true;
    else
        return false;
}

int linearSearch(int arr[],int n,int x){
    if(n == 0)
        return -1;

    if(arr[n-1] == x)
        return n;

    linearSearch(arr,n-1,x);
}

int Count(int n){

    if(n==1||n==2){return n;}


    int cndn1 = Count(n-1);
    int cndn2 = Count(n-2)*(n-1);

    return cndn1+cndn2;
}

int countPaths(int s1,int s2,int e1,int e2){

    if(s1>e1 || s2 >e2)
        return 0;
    if(s1==e1 && s2 ==e2)
        return 1;

    int val1 = countPaths(s1+1,s2,e1,e2);
    int val2 = countPaths(s1,s2+1,e1,e2);

    return val1+val2;

    }

string moveString(string str){

    if(str == "")
        return "";
    char ch = str[0];
    string ros = str.substr(1);

    string result = moveString(ros);

    if(ch == '*' && result[0]!='*')
        return result+ch;
    else
        return ch + result;
}

int main(){
    int arr[5]= {1,2,4,3,5};

    //int pos = linearSearch(arr,5,3);
    //int pos = countPaths(0,0,2,2);
    //if(pos == -1)
    //    cout<<"not found "<<endl;
    //else
    //    cout<<pos<<endl;


    cout<<moveString("****abcd**ef");
    return 0;
}
