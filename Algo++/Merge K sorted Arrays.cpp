// Merge K sorted Arrays
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

	int k;  cin>>k;
	int n;  cin>>n;

	int arr[k*n];
	for(int i=0;i<k*n;i++){
		cin>>arr[i];
	}

	insertionSort(k*n,arr);

	//display array
	for(int i=0;i<k*n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}