#include<iostream>
using namespace std;

void SumUp(int arr[],int s,int si,int n,int sum){
	

	for(int i=si;i<n;i++){
		sum +=arr[i];
		if(s == sum){

		}

		if(sum(arr,s,si+1,n,sum))
			


	}
}

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int s;
	cin>>s;

	SumUp(arr,n,s);

	return 0;

}