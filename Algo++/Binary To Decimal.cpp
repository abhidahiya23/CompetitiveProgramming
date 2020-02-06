// Binary To Decimal
#include <iostream>
#include <math.h>
using namespace std;

void binary2Decimal(string str){
	int sum=0;
	int k=0;
	for(int i= str.length()-1;i>=0;i--){
		sum = sum + (str[i]-'0')*pow(2,k);
		k++;
	}
	cout<<sum<<endl;
}

int main(){
	string str;
	cin>>str;
	binary2Decimal(str);
	return 0;
}