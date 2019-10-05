#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
	int n,k;
	cin>>n>>k;

	int arr[n];
	for (int i=0;i<n;i++)
		cin>>arr[i];

	int index_b,index_a,a,b;

	for( int i=0;i<k;i++){

		if(i<n){
			index_a = i;
			index_b = n-i-1;
		}

		else{
			index_a = i%n;
			index_b = n-(i%n)-1;

		}
		a = arr[index_a];
		b = arr[index_b];
		arr[index_a] = a^b;
	}

	for (int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
	}

	return 0;

}