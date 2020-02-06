// deque using stack
#include <iostream>
#include <stack>
using namespace std;

int main(){

	int n;	cin>>n;

	stack<int> s1;
	stack<int> s2;
	for(int i=0;i<n;i++)
		s1.push(i);

	for(int i=0;i<n;i++){
		s2.push(s1.top());
		// cout<<s1.top()<<" ";
		s1.pop();
	}

	// cout<<endl;
	for(int i=0;i<n;i++){
		cout<<s2.top()<<" ";
		s2.pop();
	}

	cout<<endl;

	return 0;
}