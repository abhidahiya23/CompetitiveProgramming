// Highest frequency( Hashing )
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

	int n;  cin>>n;
	unordered_map<int,int> u;
	for(int i=0;i<n;i++){
		int k; cin>>k;
		u[k]++;
	}

	int maxE = 0;
	int count = 0;
	for(auto i:u){
		if(count <= i.second){
			count = i.second;
			maxE = i.first;
		}
	}

	cout<<maxE<<endl;
}