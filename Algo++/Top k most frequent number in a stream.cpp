// Top k most frequent number in a stream
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){

	int t;	cin>>t;
	while(t--){
		int n;	cin>>n;
		int k;	cin>>k;
		map<int, set<int> > s;
		for(int i=0;i<n;i++){
			int num;	cin>>num;
			bool flag = false;
			if(!s.empty()){
				for(auto j:s){
					if(s[j.first].count(num)){
						s[j.first+1].insert(num);
						s[j.first].erase(num);
						flag = true;
						break;
					}
				}

				if(!flag){
					s[1].insert(num);
				}


			}else{
				s[1].insert(num);
			}

			//printing 
			int c =k;
			for (auto j = s.rbegin(); j != s.rend(); ++j){ 
        		
        		for(auto k:j->second){
        			cout<<k<<" ";
        			c--;
        			if(c==0){
        				break;
        			}
        		}

        		if(c==0){
        			break;
        		}

			}

		}

		cout<<endl;
	}
	return 0;
}