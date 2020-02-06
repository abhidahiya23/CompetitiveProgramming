#include<bits/stdc++.h>
using namespace std;

int reduceToOne(int arr[],int amount,int n,int sum){
	// int dp[amount+1]={0};
	// // memset(dp,0,sizeof(dp));
	
	// dp[0]=0;

	sort(arr,arr+n);
	int count = 0;
	int max =0;
	for(int i=n-1;i>=0;i--){
		count = 0;

		while(1){
			if(sum>0){
				sum = sum -arr[i];
				count++;
				if(sum==0){
					break;
				}
			}
			else{
				sum = sum +arr[i];
				count--;
				break;
			}
		}

		max = max+count;

		if(sum==0){
	return max;
	}else{
		return -1;
	}
		//cout<<count<<" "<<max<<" ";
	}
	
}

int main(){
	int arr[]={1,2};
	int amount = 2;
	int n = 2;
	cout<<reduceToOne(arr,amount,n,amount)<<endl;
}