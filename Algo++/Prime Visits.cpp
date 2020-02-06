#include<bits/stdc++.h>
using namespace std;

int primevisit(int a, int b){

	int count=0;
	int prime[b+1];
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	prime[0]=false;
	for(int i=2;i*i<=b;i++){
		if(prime[i]){

			for(int j=i*i;j<=b;j+=i)
				prime[j]= false;
		}
	}

	for(int i=a;i<=b;i++){
		if(prime[i])
			count++;
	}

	return count;
}

int main(){
	int t;
    cin>>t;
    while(t--){

    int a,b;
	cin>>a>>b;
// 1 2 3 4 5 6 7 8 9 10 -> 4 -> 
// 11 12 13 14 15 16 17 18 19 20 -> 4 -> 

	cout<<primevisit(a,b)<<endl;
    }
	return 0;

}