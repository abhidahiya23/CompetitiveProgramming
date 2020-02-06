// Pattern InvertedHourGlass
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for (int i = n; i >=1; i--)
	{
		for (int j = n; j >= i; j--)
		{
			cout<<j<<" ";
		}

		int space = 2*n+1 -2*(n-i)-2;
		for(int j=0;j<2*space;j++){
			cout<<" ";
		}
		
		for (int j =i; j<=n; j++)
		{
			cout<<j<<" ";	
		}
		cout<<endl;		
	}

	for(int i=n;i>=1;i--){
		cout<<i<<" ";
	}
	cout<<"0 ";
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;

	for (int i = 1; i <=n; i++)
	{	
		for (int j =n; j>=i; j--)
		{
			cout<<j<<" ";	
		}

		int space = 2*(i)-1;
		for(int j=0;j<2*space;j++){
			cout<<" ";
		}
		
		for (int j = i; j <=n; j++)
		{
			cout<<j<<" ";
		}
		
		cout<<endl;		
	}

	return 0;
}