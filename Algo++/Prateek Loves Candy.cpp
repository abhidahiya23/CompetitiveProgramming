#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000005
void find(vector<int> &v){
	bool prime[MAX_SIZE]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=MAX_SIZE; p++) 
    {  
        if (prime[p] == true) 
        {	
            for (int i=p*p; i<=MAX_SIZE; i += p) 
                prime[i] = false; 
        }
    }

    for(int p=2;p<=MAX_SIZE;p++){
    	if(prime[p])
    		v.push_back(p);
    }
	
}

int main(){
	int t; cin>>t;
	vector<int> v;
	find(v);
	while(t--){
		int n;
		cin>>n;

		cout<<v[n-1]<<endl;
	}
	return 0;
}