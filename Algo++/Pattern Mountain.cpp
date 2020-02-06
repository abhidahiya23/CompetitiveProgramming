// Pattern Mountain
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){

		//forward loop
		for(int j=1;j<=i;j++){
			cout<<j<<"\t";
		}

		int space = 2*n-2*i-1;
		//Spaces
		if(space>0)
		while(space--){
			cout<<"\t";
		}

		//backward loop
		for(int j=i;j>0;j--){
			if(j==n){
				continue;
			}
			cout<<j<<"\t";
		}
		cout<<endl;
	}

	return 0;
}