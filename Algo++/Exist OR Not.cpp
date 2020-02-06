// Exist OR Not
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

	int t;  cin>>t;

	while(t--){

	int n;  cin>>n;
	unordered_map<int,bool> u;
	for(int i=0;i<n;i++){
		int k; cin>>k;
		u[k]=true;
	}

	int q;  cin>>q;
	while(q--){
		int num; cin>>num;
		if(u.count(num)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}
	}

}