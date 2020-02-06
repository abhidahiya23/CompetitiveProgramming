// Basic Calculator
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){


	do{
		char ch;
		cin>>ch;

		if(ch=='+'){
			int a,b;
			cin>>a>>b;
			cout<<a+b<<endl;
		}else if(ch=='-'){
			int a,b;
			cin>>a>>b;
			cout<<a-b<<endl;
		}else if(ch=='*'){
			int a,b;
			cin>>a>>b;
			cout<<a*b<<endl;
		}else if(ch=='/'){
			int a,b;
			cin>>a>>b;
			cout<<a/b<<endl;
		}else if(ch=='%'){
			int a,b;
			cin>>a>>b;
			cout<<a%b<<endl;
		}else if(ch=='x' or ch =='X'){
			exit(0);
		}
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}

	}while(1);



	return 0;
}
