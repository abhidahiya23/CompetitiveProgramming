//Print Series
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;

	int i=1;
	while(a){

		int num = 3*i+2;
		if(num%b!=0){
			cout<<num<<endl;
			a--;
		}
		i++;
	}



	return 0;
}
