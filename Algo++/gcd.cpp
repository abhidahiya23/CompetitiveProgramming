#include <iostream>
#include <climits>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;

	int gcd = INT_MIN;
	for(int i=max(a,b);i>=1;i--){
		if(a%i==0 && b%i==0){
			gcd = max(gcd,i);
		}
	}
	cout<<gcd<<endl;
	return 0;
}