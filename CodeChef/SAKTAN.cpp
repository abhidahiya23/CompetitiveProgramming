#include<iostream>
#include<stdio.h>

using namespace std;

//int rowArray[10000]={ 0 }, colArray[10000]={ 0 };

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	    
	int r,c,q,i,j,count=0,rowno,colno;
	scanf("%d%d%d",&r,&c,&q);
    
    int rowArray[100000]={ 0 }, colArray[100000]={ 0 };
    
	for(i=1;i<=q;i++){
	    scanf("%d%d",&rowno,&colno);
		rowArray[rowno]++;
		colArray[colno]++;
	}
	
    if(r<=c){
	for (i = 1; i <= r; i++){
		for (j = 1; j <= c; j++)
	        if ((rowArray[i]+colArray[j])%2 !=0)
	            count++;
	}}
    else{
    for (i = 1; i <= c; i++){
		for (j = 1; j <= r; j++)
	        if ((rowArray[j]+colArray[i])%2 != 0)
	            count++;
        
    }}
    
    printf("%d\n",count);
	}
	return 0;
}