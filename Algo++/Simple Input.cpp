#include<iostream>
#include<vector>
using namespace std;

int main(){
	int sum=0;
	vector<int> v;
	while(1){
		int n;
		cin>>n;
		sum+=n;
		if(sum<0){
			break;
		}
		v.push_back(n);
	}

	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}