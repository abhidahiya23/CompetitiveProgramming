#include<iostream>
using namespace std;

bool sorted(int arr[],int n,int si){
	if(si == n-1){
		return true;
	}

	if(arr[si]>arr[si+1]){
		return false;
	}

	return sorted(arr,n,si+1);
}
int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	if(sorted(arr,n,0)){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}