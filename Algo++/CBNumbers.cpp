#include<iostream>
#include<math.h>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> check;

int isCB(int num){
	int ncb[] = {2,3,5,7,11,13,17,19,23,29};
	int n = sizeof(ncb)/sizeof(int);

	if(num==0||num==1){
		return 0;
	}

	for(int i=0;i<n;i++){
		if(num%ncb[i]==0){

			return (num==ncb[i])&&(check.count(num)) ? 1:0;
		}
	}

	while(num){
		if(check.count(num)){
			return 0;
		}
		check[num]=true;
		num = num/10;
	}

	return 1;
}

int main(){
	int n;
	cin>>n;
	int num;
	cin>>num;
	int count=0,rem=0,i=0;
	while(num){
		//cout<<num<<" "<<rem<<endl;
		count += isCB(num);
		rem += pow(10,i++)*(num%10);
		count += isCB(rem);

		num= num/10;
	}

	cout<<count<<endl;
}