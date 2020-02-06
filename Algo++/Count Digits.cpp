// Count Digits
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int digit;
	cin>>digit;
	int count=0;
	while(n){
		if(n%10==digit){
			count++;
		}
		n=n/10;
	}
	cout<<count<<endl;

	return 0;
}
