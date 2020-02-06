#include<iostream>
using namespace std;

int main(){
    int n=2,m=3,c=0;
    int arr1[n]={2,4},arr2[m]={16,32,96};

    int sol[arr2[0]-arr1[n-1]]={0};

    for(int i=arr1[n-1];i<=arr2[0];i++){
        if(i%arr1[0]==0 && i%arr1[1]==0)
            sol[c++]=i;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<c;j++)
            if(arr2[i]%sol[j]!=0)
                sol[j]=-1;
    }

    for(int i=0;i<c;i++){
        if(sol[i]>0)
            cout<<sol[i]<<" ";
    }
    return 0;
}
