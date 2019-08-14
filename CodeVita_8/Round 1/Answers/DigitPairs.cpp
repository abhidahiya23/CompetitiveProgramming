#include<iostream>
using namespace std;

int main()
{
   int n, i, j;
    cin>>n;
    int nbr[n];
    for(i=0;i<n;i++)
        cin>>nbr[i];

    int hund[n],tens[n],ones[n];
    int temp;
    //dividing into arrays

    for(i=0;i<n;i++){
        temp = nbr[i];

        ones[i] = temp%10;

        temp = temp/10;

        tens[i] = temp%10;

        temp = temp/10;

        hund[i] = temp%10;
    }


    // bit _ scores and significant bit
    int bit_score[n],most_signbit[i];
    int lar,small;
    for(i=0;i<n;i++){
        lar = hund[i];
        small= hund[i];
        // largest no
        if(tens[i]>lar)
            lar = tens[i];
        if(ones[i]>lar)
                lar = ones[i];
        // smallest no
        if(tens[i]<small)
            small = tens[i];
        if(ones[i]<small)
                small = ones[i];


        bit_score[i] = (lar*11 + small*7)%100;

    //	cout<<bit_score[i]<<"\n";
        temp = bit_score[i];

        temp=temp/10;
        temp=temp%10;
        most_signbit[i]=temp;
    }

int ecounter[10]={0};

    // for even
    for(i=0;i<n;i+=2)
    {
		ecounter[most_signbit[i]]++;
    }
   // cout<<total_count;

    int counterval[10]={0};

    // for odd
    for(i=1;i<n;i+=2)
    {
        counterval[most_signbit[i]]++;
    }


    int eo[10]={0};
     for(i=0;i<10;i++)
{
      // cout<<i<<" "<<ecounter[i]<<" "<<counterval[i];
	    if(ecounter[i]>2)
        	eo[i]=2;
        else if(ecounter[i]==2)
        	eo[i]=1;
        if(counterval[i]>2)
        	eo[i]+=2;
        else if(counterval[i]==2)
        	eo[i]+=1;
        //cout<<eo[i]<<"\n";
    }

  int total_count=0;

    for(i=0;i<10;i++)
    {
        if(eo[i] == 1)
        total_count++;
        else if(eo[i]>=2)
        total_count+=2;
    }


cout<<total_count;
   return 0;
}
