 // Arrays-Selection Sort
#include <iostream>
#include <climits>
using namespace std;

void swap(int a,int b,int arr[]){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void selectionSort(int n,int arr[]){
	for(int i=0;i<n;i++){
		int minimum = arr[i];
		int index = i;
		for(int j=i;j<n;j++){
			if(minimum>arr[j]){
				minimum = arr[j];
				index = j;
			}
		}

		swap(index,i,arr);
	}
}

int main(){

	int n;  cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	selectionSort(n,arr);

	//display array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}