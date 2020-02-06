 // Modular Exponentiation
#include <iostream>
#include <math.h>
using namespace std;

int modularExponentiation(int a,int b,int c){

	long long power=1;
	for(int i=0;i<b;i++){
		power = power*a;
		power = power%c;
	}

	return power;
}

int main(){

	int a,b,c;  cin>>a>>b>>c;

	cout<<modularExponentiation(a,b,c);

	return 0;
}