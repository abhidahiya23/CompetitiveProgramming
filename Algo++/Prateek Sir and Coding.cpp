// Prateek Sir and Coding
#include <iostream>
#include <stack>
using namespace std;

int main(){

	int n; cin>>n;

	stack<int> s;
	while(n--){
		int type;  cin>>type;

		if(type==2){
			int value;  cin>>value;
			s.push(value);
		}
		if(type==1){
			if(!s.empty()){
				cout<<s.top()<<endl;
				s.pop();
			}else{
				cout<<"No Code"<<endl;
			}
		}
	}

	return 0;
}