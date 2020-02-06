#include <iostream>
using namespace std;

void maxSave(int arr[],int n){

	int larr[n]={0};
	larr[0]=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>larr[i-1])
			larr[i]=arr[i];
		else
			larr[i]=larr[i-1];
	}

	int rarr[n];
	rarr[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(arr[i]>rarr[i+1])
			rarr[i]=arr[i];
		else
			rarr[i]=rarr[i+1];
	}


	int maxWater =0;
	for(int i=0;i<n;i++){
		maxWater += min(larr[i],rarr[i])-arr[i];
	}
	cout<<maxWater<<endl;

}

int main(){

	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	maxSave(arr,n);

	return 0;
}