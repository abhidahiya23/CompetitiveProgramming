#include<iostream>
using namespace std;

long long int arr[10000];

int main(){

	long long int t;
	cin>>t;

	while(t--){
	long long int n,k;
	cin>>n>>k;

	//int arr[n];
	for (long long int i=0;i<n;i++)
		cin>>arr[i];

	long long int index_b,index_a,a,b;
    
    if(k/(n*3)>0){
	if((n%2)  !=0 )
		arr[n/2]=0;}
	
	k = k%(n*3);

	for(long long int i=0;i<k;i++){

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

	for (long long int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
	}

	return 0;

}