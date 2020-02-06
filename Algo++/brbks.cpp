#include<iostream>
using namespace std;

int minimumHit(int s,int sum){

	int count =0;
	while(sum>0){
		sum-=s;
		count++;
	}

	return count;

}

int main(){

	int t;
	cin>>t;
	while(t--){
		int s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		int sum = w1+w2+w3;
		if(s-w1>=0)
			count++;
		
	}

}

/* 	1 1 1
	1 1 2
	1 2 1
	2 1 1
	2 2 1
	1 2 2
	2 1 2
	2 2 2 (3 =>2) 
	3 4 5 6
	
	1 3
	2 3
	2 4
	2 5
	2 6
	3 3
	3 4
	3 5
	3 6
	4 3
	4 4
	4 5
	4 6
	5 3
	5 4
	5 5
	5 6



