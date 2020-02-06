#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c; cin>>a>>b>>c;

	int d = b*b - 4*a*c;

	if(d<0){
		cout<<"Imaginary"<<endl;
	}else if(d==0){
		cout<<"Real and Equal"<<endl;
		cout<<(-b/2*a)<<" "<<(-b/2*a)<<endl;
	}else{
		cout<<"Real and Distinct"<<endl;
		cout<<(-b-sqrt(d))/2*a<<" "<<(-b+sqrt(d))/2*a<<endl;
	}

	return 0;
}