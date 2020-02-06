// Check prime
#include <iostream>
using namespace std;

void checkPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not Prime"<<endl;
			return;
		}
	}

	cout<<"Prime"<<endl;

}

int main(){
	int n;
	cin>>n;
	checkPrime(n);
	return 0;
}