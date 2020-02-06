// Counting Sort
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){

	int n;  cin>>n;
	int arr[n];
	int m= INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		m = max(m,arr[i]);
	}
	int freq[m+1];
	memset(freq,0,sizeof(freq));
	
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}

	for(int i=0;i<=m;i++){
		while(freq[i]){
			cout<<i<<" ";
			freq[i]--;
		}
	}

	return 0;
}