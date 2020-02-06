#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	    
	long long r,c,q,i,j,count=0,rowno,colno;
	scanf("%d%d%d",&r,&c,&q);
    
    long long rowArray[r] = {0}, colArray[c]= {0};
    
	for(i=1;i<=q;i++){
	    scanf("%d%d",&rowno,&colno);
		rowArray[rowno]++;
		colArray[colno]++;
	}
	
    long long rc=0,cc=0;
    // rc = even number of rows , cc = odd number of columns
	for (i = 1; i <= r; i++){
	    if ((rowArray[i]%2 == 0))
	        rc++;
	    }
	    
	for (i = 1; i <= c; i++){
	    if((colArray[i]%2 !=0))
	        cc++;
	    }
	count = rc*(cc) + (c-cc)*(r-rc);
    
    printf("%d\n",count);
	}
	return 0;
}