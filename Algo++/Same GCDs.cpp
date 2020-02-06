// Same GCDs
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}

// Function for extended Euclidean Algorithm  
int gcdExtended(int a, int b, int *x, int *y)  
{  
    // Base Case  
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    int x1, y1; // To store results of recursive call  
    int gcd = gcdExtended(b%a, a, &x1, &y1);  
  
    // Update x and y using results of  
    // recursive call  
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
} 


int main(){

	int t;  cin>>t;

	while(t--){

		int a,m;   cin>>a>>m;
		int count=0;
		//gcd(a,m)=gcd(a+x,m)
		int check = gcd(a,m);
		for(int x=0;x<m;x++){
			int z,y;
			count+=(gcdExtended(a+x,m,&z,&y)==check);
		}

		cout<<count<<endl;

	}

}