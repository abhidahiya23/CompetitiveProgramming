#include<iostream>
using namespace std;

/*    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = s+e/2;
        if(arr[mid]==data){
            Indexes(arr,mid-1,data);
            ans = mid;
        }
        else if(data>arr[mid]){

        }
    }
}


int Square(int n,int data){
    int s = 1;
    int e = n;

    while(s<=e){
        int mid = (s+e)/2;
        if(mid*mid==data){
            return true;
        }
        else if(data>mid*mid){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    return -1;
}

int RotatedArray(int arr[],int s,int e,int data){

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] == data)
            return true;
        else if(arr[mid]<data){
            RotatedArray(arr,s,e,data);
            s = mid +1;
            }
        else{
            e = mid-1;
            RotatedArray(arr,s,e,data);
        }
    }

    return -1;
}

int Unique(int arr[],int s,int e){

    int mid = s + (e-s)/2;

    if(arr[mid]==arr[mid+1]){
        if((mid-1-s)%2!=0)
            Unique(arr,mid+2,e);
        else
            Unique(arr,s,mid-1);
    }
    else if(arr[mid]==arr[mid-1]){
        if((e-mid+1))!=0)
            Unique(arr,mid+1,e);
        else
            Unique(arr,s,mid-2);
    }
    else{
        if(arr[mid]==arr[mid+2])
            return mid+1;
        else(arr[mid-2]==arr[mid+2])
            return mid-1;
    }
}
*/

bool isPossible(int arr[],int n,int k,int sum){

    int subsets = 1;
    int subsetSum = 0;

    for(int i=0;i<n;i++){
        subsetSum+=arr[i];

        if(subsetSum>time){
            subsets++;


        if(subsets>k){
            return false;
        }
        subsetSum = arr[i];
        }
    }
    return true;
}


int SplitArray(int arr[],int n,int k){

    int total = 0;
    int MaxValue =

    for(int i=0;i<n;i++){
        total+=arr[i];
    }

    while(s<=e){
        if(isPossible(arr,n,k,sum)){


        }

    }


}


int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5};
    int n = 9;
    //Indexes(arr,n,data);
    //cout<<Square(n,1)<<endl;
    //cout<<RotatedArray(arr,0,n-1,4);
    //cout<<Unique(arr,0,8);
    return 0;
}
