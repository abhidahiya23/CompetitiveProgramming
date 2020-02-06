#include<bits/stdc++.h>
using namespace std;

void find(int a,int b,int c,int n){
	if(4*a*b==n){
		cout<<"NO"<<endl;
		return;
	}
	long long int pdt = (a*b)*c;
	if(pdt==n){
		if(a!=b && b!=c && a!=c){
			cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<" "<<endl;
		}
		return;
	}

	if(pdt>n){
		return;
	}

	find(a,b,c+1,n);
	find(a,b+1,c,n);

}

int main(){

	int t; cin>>t;

	while(t--){

	int n;
	cin>>n;
	//find(2,3,4,n);
	int flag =0;
	int i=2;
	unordered_map<int,bool> h;
	while(1){
		int j=i+1;
		while(1){
			int k=j+1;
			while(1){
				long long int pdt = (i*j)*k;
				if(h.count(pdt)){
					if(k<n/(i*j))
					k++;
				else{
					break;
					}
					continue;
				}
				if(pdt==n){
					if(i!=j && j!=k && k!=i){
						cout<<"YES"<<endl<<i<<" "<<j<<" "<<k<<" "<<endl;
						flag=1;
					}
					if(flag==1){
						break;
					}
				}
				if(k<n/(i*j))
					k++;
				else{
					break;
				}
			}
			if(j<n/i)
				j++;
			else
				break;

			if(flag==1){
				break;
			}

		}
		if(flag==1){
			break;
		}
		int val = (i+2)*(i+3);
		if(i<n/val)
			i++;
		else
			break;
	}
	if(flag==0)
		cout<<"NO"<<endl;

	}
	return 0;
}