//Recursion-Lexicographical Order

#include<bits/stdc++.h>
using namespace std;

void subSequences(int n,set<string> &s){
	if(n==-1){
		return;
	}

	s.insert(to_string(n));

	subSequences(n-1,s);

}
int main() {
	
	int n;
	cin>>n;
	set<string> s;
	subSequences(n,s);

	set<string>::iterator it;  
	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << endl;
	
	return 0;
}