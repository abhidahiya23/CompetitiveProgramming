// Decimal To Octal
#include <iostream>
#include <math.h>
using namespace std;

void decimal2Octal(int n){
	string sum;
	while(n){
		sum.append(to_string(n%8));
		n=n/8;
	}
	for(int i = sum.length()-1;i>=0;i--){
		cout<<sum[i];	
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	decimal2Octal(n);
	return 0;
}
