#include<iostream>
using namespace std;

void sumCalculate(int arr1[],int n,int arr2[],int m){
	int size = n>m ? n:m;
	int tempSize = size;
	int ans[size]={0};	

	int carry=0,ones,add;

	while(n>0 && m>0){
		add = arr2[m-1]+arr1[n-1]+carry;
		ones = add%10;
		carry = add/10;
		ans[size-1] = ones;
		n--;
		m--;
		size--;
	}

	while(n>0 && size>0){
		add = arr1[n]+carry;
		ones = add%10;
		carry = add/10;
		ans[size-1] = ones;
		n--;
		size--;	
	}

	while(m>0 && size>0){
		add = arr2[m-1]+carry;
		ones = add%10;
		carry = add/10;
		ans[size-1] = ones;
		m--;
		size--;
	}

	if(carry>0){
		cout<<carry<<", ";
	}

	for(int i=0;i<tempSize;i++){
		cout<<ans[i]<<", ";
	}

	cout<<"END";

}

int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}

	int m;
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}

	sumCalculate(arr1,n,arr2,m);

	return 0;
}