// lft,kft,ch
// String Sort
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	set<string> s;
	
	while(n--){
		string str;
		cin>>str;
		s.insert(str);
	}
	
	set<string>::iterator it,next;
	next = s.begin();
	next++;
	for (auto it = s.begin(); it != s.end(); it++){ 
		string  ne = *next;		
		string cur = *it;
		if(cur.length()<ne.length()){
			ne = ne.substr(0,cur.length());
			if(ne==cur){
				cout<<*next<<endl<<*it<<endl;
				next++;
				next++;
				it++;
			}else{
				cout<<*it<<endl;
					next++;
			}
		}else{
			cout<<*it<<endl;
				next++;
		}
	}
	
	return 0;
}