#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,b,c,d,e,x,a,s,ans;
		cin>>n;
		x = pow(10,n);

		cin>>a;
		s = x*2+a;
		cout<<s<<endl;
		fflush(stdout);
		// s = a + b + c + d + e
		cin>>b;
		// s -a -b = c + d + e 
		c = (s-a-b)/2;
// 		 if(c >x)
// 		 	c = x;
// 		 else if(c<0)
// 		 	c = 0;
		cout<<c<<endl;
		fflush(stdout);
		
		cin>>d;

		e = s-a-b-c-d;
// 		 if(e >x)
// 		 	e = x;
// 		 else if(e<0)
// 		 	e = 0;		
		cout<<e<<endl;
		fflush(stdout);
		
		cin>>ans;
        if(ans ==-1)
		    break;
        
	}
	
	return 0;
}