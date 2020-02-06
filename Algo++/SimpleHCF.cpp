#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int hcf = 1;
	int m = INT_MIN;
	for(int i=0;i<n;i++){
		m = max(m,arr[i]);
	}
	for(int i=2;i<=m;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]%i==0){
				count++;
			}
		}
		if(count == n){
			hcf = i;
		}
	}

	cout<<hcf<<endl;
	return 0;
}