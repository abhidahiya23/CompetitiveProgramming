#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char **weapon = new char*[n];
    for (int i=0;i<n;i++)
        weapon[i] = new char[10];

    for(int i=0; i<n;i++)
        cin>>weapon[i];

    int cnt=0;
    int val[10];
    for(int i=0;i<10;i++){
        val[i] = weapon[0][i]^weapon[1][i];
        cout<<val[i];
    }
    cout<<endl;

    for(int i=2;i<n;i++){
        for(int j=0;j<10;j++){
            val[j] = weapon[i][j]^val[j];
            cout<<val[j];
        }
        cout<<endl;
    }

    for(int i=0;i<10;i++)
        if(val[i] == 1)
            cnt++;


    cout<<cnt<<endl;

    return 0;
}
