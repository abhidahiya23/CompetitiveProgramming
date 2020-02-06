// Help Ramu
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4;
		int n,m;
		cin>>n>>m;
		int nu[n],mu[m];
		for(int i=0;i<n;i++) cin>>nu[i];
		for(int i=0;i<m;i++) cin>>mu[i];

		// total rickwas cost
		int trc=INT_MIN;
		int temp =0;
		for(int i=0;i<n;i++){
			temp += min(nu[i]*c1,c2);
		}
		trc = min(temp,c3);

		// total cabs cost
		int tcc=INT_MIN;
		temp =0;
		for(int i=0;i<m;i++){
			temp += min(mu[i]*c1,c2);
		}
		tcc = min(temp,c3);

		int tc = min(tcc+trc,c4);

		cout<<tc<<endl;
	// The total cost of rickshaws = min( min(2 * 1, 3) + min(5 * 1, 3), 7) = min(5, 7) = 5
	// The total cost of cabs = min( min(4 * 1, 3) + min(4 * 1, 3) + min(4 * 1, 3) , 7) = min ( 9, 7) = 7
	// Total final cost = min( totalCabCost + totalRickshawCost , c4) = min( 5 + 7, 19) = min ( 12, 19) = 12 
	}
	return 0;
}
