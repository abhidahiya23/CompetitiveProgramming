#include<iostream>
using namespace std;

int subsetSum(int arr[],int n,int si,int sum){
    // Base Case
    if(si==n){
        if(sum==0){
            return 1;
        }else{
            return 0;
        }
    }
    
    int count = 0;
    //Recursive Case
    count += subsetSum(arr,n,si+1,sum);
    count += subsetSum(arr,n,si+1,sum+arr[si]);

    return count ;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int result = subsetSum(arr,n,0,0);
        if(result>1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}

