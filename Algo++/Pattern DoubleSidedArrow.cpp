// Pattern DoubleSidedArrow
#include <iostream>
using namespace std;

int main(){

	int t;
	cin>>t;

	int n = t/2+1;

	int space = 4*n-4,space2=2;
	for(int i=1;i<=n;i++){
		
		for(int j=space;j>=1;j--){
			cout<<" ";
		}

		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}

		if(i>1){
		for(int j=space2;j>=1;j--){
			cout<<" ";
		}
		space2+=4;
		}

		if(i>1)
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
		space-=4;
	}

	space=4;
	space2-=8;
	for(int i=n-1;i>=1;i--){
		
		for(int j=space;j>=1;j--){
			cout<<" ";
		}

		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}
		if(i!=1){
		for(int j=space2;j>=1;j--){
			cout<<" ";
		}
		space2-=4;
		}

		if(i>1)
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
		space+=4;
	}

	return 0;
}