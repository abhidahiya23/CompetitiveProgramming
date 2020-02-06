#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n; cin>>n;
	
	vector<long long> v;

	v.push_back(0);
	v.push_back(1);

	int cal = n*(n+1)/2;
	//cout<<cal<<endl;
	
	for(int i=2;i<=cal;i++){
		v.push_back(v[i-1] + v[i-2]);  
	}

	int k=1;
	int c=0;
	for(int i=0;i<=cal;i++){
		cout<<v[i]<<"\t";
		c++;
		if(c==k){
			cout<<endl;
			k++;
			c=0;
		}

		if(k==n+1){
			break;
		}
	}

	return 0;
}