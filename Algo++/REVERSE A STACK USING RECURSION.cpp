// REVERSE A STACK USING RECURSION
#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> s,stack<int> &k){
	if(s.empty()){
		return;
	}

	k.push(s.top());
	s.pop();
	reverseStack(s,k);
}

int main(){	

	int n;	cin>>n;
	stack<int> s;

	for(int i=0;i<n;i++){
		int k;	cin>>k;
		s.push(k);
	}

	stack<int> k;
	reverseStack(s,k);

	while(!k.empty()){
		cout<<k.top()<<endl;
		k.pop();
	}

	return 0;
}