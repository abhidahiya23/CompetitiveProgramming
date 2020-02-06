 // Display The Number
#include <iostream>
#include <climits>
using namespace std;

int main(){

	int t;  cin>>t;
	while(t--){
		int n;  cin>>n;
		string str;
		if(n%2==0){
			for(int i=0;i<n/2;i++){
				str+="1";
			}
		}else{
			str+="7";
			for(int i=0;i<(n-3)/2;i++){
				str+="1";
			}
		}
		cout<<str<<endl;
	
	}
}