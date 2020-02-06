#include<iostream>
#include<climits>
using namespace std;

int maxSum = INT_MIN;

void houseRobber(int arr[], int si,int n,int sum){
	if(si==n || si>n){
		maxSum = max(maxSum,sum);
		return; 
	}


	houseRobber(arr,si+2,n,sum+arr[si]);

}

int main(){

	int arr[]={1,2,3,1};
	int n =4;
	houseRobber(arr,0,n,0);
	houseRobber(arr,1,n,0);
	cout<<maxSum<<endl;
	return 0;
}