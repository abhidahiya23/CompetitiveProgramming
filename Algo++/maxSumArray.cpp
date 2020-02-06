#include<iostream>
#include<climits>
using namespace std;

// int maxSum;

// void maximumSum(int arr[],int n,int si,int sum){
//     // Base Case
//     if(si==n){
//         maxSum = max(sum,maxSum);
//         return;
//     }
    
//     //Recursive Case
//     maximumSum(arr,n,si+1,sum);
//     maximumSum(arr,n,si+1,sum+arr[si]);

// }


int maximumSum(int arr[],int n){
    // kadane's Algorithm
    int cs=0,ms=0;
    for(int i=0;i<n;i++){
        cs += arr[i];
        if(cs<0){
            cs=0;
        }
        ms = max(cs,ms);

    }
    return ms;
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

        cout<<maximumSum(arr,n)<<endl;
    }
	return 0;
}

