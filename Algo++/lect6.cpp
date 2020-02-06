#include<iostream>
using namespace std;

int SearchSortedArray(int arr[],int s,int e,int data){

	int mid = s + (e-s)/2;

	int ans = -1;

	if(arr[mid] == data)
		ans = mid;

	if(arr[s]<arr[mid]){
		if(data>arr[s] && data<arr[mid])
			return SearchSortedArray(arr,s,mid-1,data);
		else
			return SearchSortedArray(arr,mid+1,e,data);
	}
	if(arr[mid]<arr[e]){
		if(data<arr[e] && data>arr[mid])
			return SearchSortedArray(arr,mid+1,e,data);
		else
			return SearchSortedArray(arr,s,mid-1,data);
	}

	return ans;

}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int data;
	cin>>data;

	int s = 0;
	int e = n-1;

	cout<<SearchSortedArray(arr,s,e,data)<<endl;
	return 0;
}
