// Unlock
#include <iostream>
using namespace std;

void swap(int a,int b,int arr[]){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void findMax(int n,int k,int arr[]){
	int i=0;
	while(k){
		int e=arr[i],idx=i;
		bool flag=false;
		for(int j=i+1;j<n;j++){
			if(arr[j]>e){
				e = arr[j];
				idx = j;
				flag = true;
			}
		}

		if(flag){
			swap(i,idx,arr);
			k--;
		}

		i++;
		if(i==n){
			break;
		}
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}

int main(){
	int n;	cin>>n;
	int k; 	cin>>k;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	findMax(n,k,arr);

	return 0;
}