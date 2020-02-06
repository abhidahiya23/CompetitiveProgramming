#include<bits/stdc++.h>
using namespace std;

void maximumLengthString(string str,int k){

	int l = str.length();

	if(l==k){
		cout<<k<<endl;
		return;
	}

	int acount=0,bcount=0;
	int countarray[l]={0};
	for(int i=0;i<l;i++){
		if(str[i]=='a'){
			countarray[i]=1;
			acount++;
		}else{
			bcount++;
		}
	}
	int c1,c2;
	if(acount>=bcount){
		c1 = 0;
		c2 = 1;
	}else{
		c2 = 0;
		c1 = 1;
	}

	while(k){
		for(int i=1;i<l-1;i++){
			if(countarray[i-1]==c2 && countarray[i]==c1 && countarray[i+1]==c2){
				countarray[i]=c2;
				k--;
				break;
			}
		}

		if(k!=0){
			break;
		}
	}

	int a[l]={1};
	int m=INT_MIN;
	for(int i=1;i<l;i++){
		if(countarray[i]==countarray[i-1]){
			a[i] = a[i-1]+1;
		}else{
			a[i]=1;
		}

		m = max(m,a[i]);
	}
	cout<<max(m+k,m+k)<<endl;
}

int main(){
	int k;
	cin>>k;
	string str;
	cin>>str;

	maximumLengthString(str,k);

	return 0;
}