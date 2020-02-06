// Pattern HourGlass
#include <iostream>
#include <math.h>
#include <climits>
#include <vector>
using namespace std;

int main(){

	int n;
	cin>>n;
	vector<string> Fans;
	for (int i = n; i >=1; i--)
	{	string ans;
		int space = n-i;
		for(int j=0;j<2*space;j++){
			// cout<<" ";
			ans+=" ";
		}

		for (int j = i; j >= 1; j--)
		{
			// cout<<j<<"";
			ans+=to_string(j)+" ";
		}

		// cout<<"0";
		ans+="0 ";
		
		for (int j = 1; j<=i; j++)
		{
			//cout<<j<<"";
			ans+=to_string(j)+" ";	
		}

		cout<<ans<<endl;

		Fans.push_back(ans);
	}

	for(int i=0;i<2*n;i++)
		cout<<" ";

	cout<<"0"<<endl;

	for(int i=Fans.size()-1;i>=0;i--){
		cout<<Fans[i]<<endl;
	}


	return 0;
}