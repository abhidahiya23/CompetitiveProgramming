#include<bits/stdc++.h>
using namespace std;

unordered_map<int,bool> h;

bool uglysum(int n){
	if(n==1){
		return true;
	}

	if(h.count(n)){
		return h[n];
	}

	bool a=false,b=false,c=false;

	if(n%2==0)
		a = uglysum(n/2);
	if(n%3==0)
		b = uglysum(n/3);
	if(n%5==0)
		c = uglysum(n/5);

	h[n] = a||b||c;

	return a||b||c;
}


int main(){
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		int count=0,i=1;
		while(1){
			if(uglysum(i)){
				count++;
				if(count==n){
					cout<<i<<endl;
					break;
				}
			}
			i++;
		}

	}
	return 0;
}