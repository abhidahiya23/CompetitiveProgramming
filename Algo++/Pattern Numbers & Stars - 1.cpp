// Pattern Numbers & Stars - 1
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){

	int n;
	cin>>n;
	int k = -1;
	for (int i = n; i >=1; i--)
	{	
		for (int j = 1; j <= i; ++j)
		{
			cout<<j<<" ";
		}

		
		for (int j = k; j>=0; j--)
		{
			cout<<"* ";	
		}

		k+=2;
		cout<<endl;

	}






	return 0;
}