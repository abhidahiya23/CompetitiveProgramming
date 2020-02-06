// Sorting In Linear Time
#include<iostream>
using namespace std;

// Two pointer approach

void swap(int arr[],int a,int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void linearSort(int arr[],int n){
	int low = 0,high = n-1;
	int mid=0;
	while(mid<high){
		if(arr[mid]==0){
			swap(arr,low,mid);
			low++;
			mid++;
		}else if(arr[mid]==2){
			swap(arr,mid,high);
			high--;
		}else{
			mid++;
		}
	}
}

int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	// for(int i=0;i<=2;i++){

	// 	for(int j=0;j<n;j++){
	// 		if(arr[j]==i){
	// 			cout<<arr[j]<<endl;
	// 		}
	// 	}

	// }

	linearSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}