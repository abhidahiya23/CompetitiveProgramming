#include<bits/stdc++.h>
using namespace std;


unsigned long long int nCrModpDP(unsigned long long int n,unsigned long long int r,unsigned long long int p)
{

    unsigned long long int C[r+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;


    for (unsigned long long int i = 1; i <= n; i++)
    {

        for (unsigned long long int j = min(i, r); j > 0; j--)

            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

unsigned long long int nCrModpLucas(unsigned long long int n,unsigned long long int r,unsigned long long int p)
{

   if (r==0)
      return 1;


   unsigned long long int ni = n%p, ri = r%p;


   return (nCrModpLucas(n/p, r/p, p) *
           nCrModpDP(ni, ri, p)) % p;
}

int main()
{
    unsigned long long int n, r, p = 1000000007;
    cin>>n>>r;
    cout << nCrModpLucas(n, r, p);
    return 0;
}
