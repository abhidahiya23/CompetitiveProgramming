// Pattern Triangle
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		int space = n-i;
		//Spaces
		while(space--){
			cout<<"\t";
		}
		//forward loop
		for(int j=i;j<2*i;j++){
			cout<<j<<"\t";
		}
		//backward loop
		for(int j=2*i-2;j>=i;j--){
			cout<<j<<"\t";
		}
		cout<<endl;
	}

	return 0;
}