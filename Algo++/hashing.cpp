#include <bits/stdc++.h>
using namespace std;

int longestSubarraySumWithZero(int arr[],int n,int k){

	unordered_map<int,int> h;

	h[k] = -1;

	int sum = 0;

	int maxLength = -1;

	for(int i=0;i<n;i++){

		sum+=arr[i];

		if(h.count(sum)){
			int abhiTakKiLength = i - h[sum];
			maxLength = max(maxLength,abhiTakKiLength);
		}//else{
			h[sum] = i;
		//}
	}

	return maxLength;
}

int main(){

	//int arr[]= {1,-1,54,-51,-1,-3};
	int arr[] = {1,2,1,1,1,0,1,0,1,0,1};
	int k =3;
	cout<<longestSubarraySumWithZero(arr,11,k)<<" "<<endl;

	return 0;
}