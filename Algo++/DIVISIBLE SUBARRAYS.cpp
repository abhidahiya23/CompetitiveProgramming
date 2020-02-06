// DIVISIBLE SUBARRAYS
#include <bits/stdc++.h>
using namespace std;

int SubArrays(int arr[],int n){

	int cs[n+1];
	memset(cs,0,sizeof(cs));

	for(int i=0;i<n;i++){
		cs[i+1] = cs[i] + arr[i];
		//cout<<cs[i+1]<<" ";
	}
	//cout<<endl;

	int bucket[n];
	memset(bucket,0,sizeof(bucket));

	for(int i=0;i<n+1;i++){
		cs[i]=cs[i]%n;
		bucket[cs[i]]++;
	}

	int sum =0;
	for(int i=0;i<n;i++){
		if(bucket[i]>=2){
			sum += (bucket[i])*(bucket[i]-1)/2;
		}
	}

	return sum;
	
}

int main(){

	int t;  cin>>t;
	while(t--){
		int n;  cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		cout<<SubArrays(arr,n)<<endl;
	}
	return 0;
}