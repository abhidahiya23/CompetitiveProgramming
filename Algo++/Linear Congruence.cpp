#include<iostream>
using namespace std;

bool rel(int x,int a,int res){
	return x%a==res ? true : false;
}

void minimumLinearCongruence(int n,int a[],int rem[]){
	int x =1;
	while(1){
		bool result = true;
		for(int i=0;i<n;i++){
			result = result and rel(x,a[i],rem[i]);
		}
		if(result ==true ){
			cout<<x<<endl;
			break;
		}
		x++;
	}
}

void chineseTheorem(int n,int a[],int rem[]){

	long long int pdt=1;
	for(int i=0;i<n;i++){
		pdt *= a[i];
	}

	long long int ppe[n];
	for(int i=0;i<n;i++){
		ppe[i] = pdt/a[i];
	}

	long long int inv[n];
	for(int i=0;i<n;i++){
		int j=1;
		while(1){
			if((j*ppe[i])%a[i]==1){
				inv[i] = j;
				break;
			}
			j++;
		}
	}


	long long int result=0;
	for(int i=0;i<n;i++){
		result+=ppe[i]*rem[i]*inv[i];
		result%=pdt;
	}

	cout<<result%pdt<<endl;

}

int main(){

	int n; cin>>n;
	int rem[n],a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>rem[i];

	// Normal Solution
	//minimumLinearCongruence(n,a,rem);

	// Chinese Remainder Theorem
	chineseTheorem(n,a,rem);

	return 0;
}