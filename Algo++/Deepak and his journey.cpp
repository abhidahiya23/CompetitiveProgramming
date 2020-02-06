// Deepak and his journey
#include <iostream>
#include <climits>
using namespace std;

long long int findMinimum(long long int n,long long int L[],long long int C[]){
	long long int mp=0; // minimum cost 
	long long int minFuel[n]; // minimum cost per petrol pump
	for(int i=0;i<n;i++){
		minFuel[i]= L[i]*C[i];
	}
	long long int mc=INT_MAX; // minimum cost till ith index
	for(int i=0;i<n;i++){
		mp += min(minFuel[i],mc*L[i]);
		mc=min(C[i],mc);	
	}

	return mp;
}

int main(){

	int t;	cin>>t;
	while(t--){
		long long int n;	cin>>n;
		long long int C[n]; //cost of petrol
		long long int L[n]; //minimum petrol required 

		for(int i=0;i<n;i++){
			cin>>C[i];
		}

		for(int i=0;i<n;i++){
			cin>>L[i];
		}

		cout<<findMinimum(n,L,C)<<endl;

	}
	return 0;
}