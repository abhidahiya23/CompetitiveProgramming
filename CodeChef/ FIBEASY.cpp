#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

// Finds nth fibonacci number
ll fib(ll f[], ll n)
{
	// 0th and 1st number of
	// the series are 0 and 1
	f[1] = 0;
	f[2] = 1;

	// Add the previous 2 numbers
	// in the series and store
	// last digit of result
	for (ll i = 3; i <= n; i++)
		f[i] = (f[i - 1] + f[i - 2]) % 10;

	return f[n];
}

// Returns last digit of n'th Fibonacci Number
int findLastDigit(int n)
{
	ll f[60] = {0};

	// Precomputing units digit of
	// first 60 Fibonacci numbers
	fib(f, 60);

	return f[n % 60];
}
bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
// Driver code
int main ()
{ int t;
  cin>>t;
  while(t--){
	ll n,no ;
  cin>>n;
  if(isPowerOfTwo(n))
    no = n;
  else{
  int s = sqrt(n);
   no = pow(2,s);
  while(no>= n){
  s--;
 no = pow(2,s);
  }}
	cout << findLastDigit(no)<< endl; }

	return 0;
}
