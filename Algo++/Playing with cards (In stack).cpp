// Playing with cards (In stack)
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){

	int n;	cin>>n;
	int q;	cin>>q;
	stack<int> s;
	for(int i=0;i<n;i++){
		int num;	cin>>num;
		s.push(num);
	}

	//Sieve of Eratothennes
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    {
        if (prime[p] == true) 
        {
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }


	stack<int> a,b;
	for(int i=1;i<=n;i++){
		int num = s.top();
		s.pop();

		int p,k;
		for (p=2; p<=n; p++) 
       		if(prime[p]){
       			k++;
       			if(k==i){
       				break;
       			}
       		} 
        		 

		if(num%p==0){
			b.push(num);
		}else{
			a.push(num);
		}

	}

	while(!b.empty()){
		cout<<b.top()<<endl;
		b.pop();
	}
	while(!a.empty()){
		cout<<a.top()<<endl;
		a.pop();
	}

	return 0;
}