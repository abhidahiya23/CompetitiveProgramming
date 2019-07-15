#include<iostream>
using namespace std;

int main()
{
   int n, i, j, space;

   cout << "Enter value of n: ";
   cin >> n ;
    int row=0,start;
    int for_dc_init = n-1;
    int uc = 1,dc= n*n ;
   for(i = 0; i < n; i++)
   {    start = dc;
        for(j = 0;j<row;j++)
            cout<<"*";
      //for loop to put space
      for(j = 0; j <(2*n - row)/2; j++)
         cout << uc++ <<"0";
      //for loop for displaying star
      for(j = 0; j < ((2*n - row)/2)-1; j++)
         {
            cout << ++start<<"0";}

      cout<< ++start;

      cout << "\n";
        row+=2;

        dc = dc - for_dc_init;
        for_dc_init--;

   }

   return 0;
}
