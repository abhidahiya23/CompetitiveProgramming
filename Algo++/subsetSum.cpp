#include<bits/stdc++.h>
using namespace std;

bool SubsetSum(int arr[],unordered_map<string,bool> &dp,int n,int si,int maxSum,int sum){
	
	string key = to_string(si) + " " + to_string(sum);

	if(sum==maxSum){
		return true;
	}

	if(dp.count(key)){
		return dp[key];
	}

	if(sum > maxSum || si >n)
		return false;

	bool a = SubsetSum(arr,dp,n,si+1,maxSum,sum+arr[si]);
	bool b = SubsetSum(arr,dp,n,si+1,maxSum,sum);
	
	dp[key] = a|b;

	return dp[key];

}

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	//int dp[n+1];
	//memset(dp,-1,sizeof(dp));

	unordered_map<string,bool> dp;

	if(SubsetSum(arr,dp,n,0,k,0))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}