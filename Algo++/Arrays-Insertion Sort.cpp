// Arrays-Insertion Sort
#include <iostream>
#include <climits>
using namespace std;

void insertionSort(int n,int arr[]){
	for(int i=1;i<n;i++){

		int element = arr[i];

		int j = i-1;
		while(j>=0 && element<arr[j]){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = element;
	}
}

int main(){

	int n;  cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	insertionSort(n,arr);

	//display array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}