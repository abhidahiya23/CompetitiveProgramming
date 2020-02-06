// Deepak and Primes
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100000005;
bool prime[MAX_SIZE];

int sieve(int n){
	
	memset(prime,true,sizeof(prime));

	for(int i=2;i*i<MAX_SIZE;i++){

		if(prime[i]){
			for(int j = i*i;j<MAX_SIZE;j+=i){
				prime[j]=false;
			}
		}
	}

	for (int i = 2; i < MAX_SIZE; ++i)
	{	
		if(prime[i]){
			n--;
		}
		if(n==0){
			return i;
		}
	}

}

int main(){

	int n;
	cin>>n;

	cout<<sieve(n)<<endl;

	return 0;
}
