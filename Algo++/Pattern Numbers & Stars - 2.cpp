// Pattern Numbers & Stars - 2
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){

	int n;
	cin>>n;
	
	for (int i = 1; i <=n; i++)
	{	
		for (int j = 1; j <= i; ++j)
		{
			cout<<j<<"";
		}

		
		for (int j = n-i-1; j>=0; j--)
		{
			cout<<"*";	
		}

		cout<<endl;

	}






	return 0;
}