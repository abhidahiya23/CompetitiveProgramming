// Is Armstrong Number
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

bool isArmstring(int n){
	long long int sum=0;
	int temp = n;
	int l=0;
	while(temp){
		temp/=10;
		l++;
	}
	temp=n;
	while(temp){
		sum += pow(temp%10,l);
		temp/=10;
	}

	if(sum==n){
		return true;
	}

	return false;
}
int main(){
	int n;
	cin>>n;

	if(isArmstring(n))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;

	return 0;
}