#include<bits/stdc++.h>
using namespace std;

void targetSum(int arr[],int n,int si,int target,string ans,unordered_map<string,bool> &h){
	if(si==n){
		int a = ans[0]-'0';
		int b = ans[1]-'0';
		//cout<<ans<<endl;
		if((a+b)==target){
			cout<<a<<" and "<<b<<endl;
			// string key = to_string(a) + " and " + to_string(b);
			// if(!h.count(key)){
			// 	h[key] = true;
			// }
		}

		return;
	}

	targetSum(arr,n,si+1,target,ans,h);
	if(ans.length()<2)
		targetSum(arr,n,si+1,target,ans+to_string(arr[si]),h);
	else
		return;

}

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int target;
	cin>>target;

	unordered_map<string,bool> h;

	targetSum(arr,n,0,target,"",h);

	// for(auto it:h){
	// 	cout<<it.first<<endl;
	// }

	return 0;
}