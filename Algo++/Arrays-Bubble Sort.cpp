// Arrays-Bubble Sort
#include <iostream>
using namespace std;

void swap(int a,int b,int arr[]){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void bubbleSort(int n,int arr[]){
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			if(arr[j+1]<arr[j])
				swap(j,j+1,arr);
		}
	}
}

int main(){

	int n;  cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	bubbleSort(n,arr);

	//display array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}