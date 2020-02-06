// LCM
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
	long long int a,b;
	cin>>a>>b;

	for(long long int i=max(a,b);i<1000000000;i++){
		if(i%a==0 and i%b==0){
			cout<<i<<endl;
			break;
		}
	}


	return 0;
}
