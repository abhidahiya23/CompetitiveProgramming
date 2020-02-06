// Infinite Prefixes
#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int t;  cin>>t;

	while(t--){
		int n,x; cin>>n>>x;
		string str; cin>>str;


		long long int count=0;
		int s = str.length();
		int l=0;
		int i=0;
		while(s>0){
			if(i>=1)
			if(str[i%s]=='0'){
				l++;
			}
			else{
				l--;
			
			}

			if(l==x){
				count++;
			}
			i++;

			if(i==10000005)
				break;
		}
		if(count>sqrt(i))
			cout<<"-1"<<endl;
		else
			cout<<count<<endl;
	}
}