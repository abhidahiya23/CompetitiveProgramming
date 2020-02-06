#include<iostream>
using namespace std;

int total = 0;

void coin2(int arr[],int n,int si,int sum,int amount){

	if(sum==amount){
		total++;
	return;
	}
	
	if(si>=n){return;}

	for(int i=0;i<n;i++){
		coin2(arr,n,si+1,sum+arr[i],amount);
	}
}

int main(){

	int arr[]= {1,2,5};
	int amount = 5;
	int n = 3;
	coin2(arr,n,0,0,amount);
	cout<<total<<endl;
	return 0;
}