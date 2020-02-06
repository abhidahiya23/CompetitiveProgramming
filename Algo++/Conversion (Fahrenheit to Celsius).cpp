// Conversion (Fahrenheit to Celsius)
#include <iostream>
using namespace std;

int convert2Celcius(int f){
	//C = (5/9)(F – 32)

	double c = (5)*(f-32);
	c /= 9;
	return (int)c;
}

int main(){
	int minF,maxF,step;
	cin>>minF>>maxF>>step;

	while(minF<=maxF){
		cout<<minF<<"\t"<<convert2Celcius(minF)<<endl;
		minF+=step;
	}

	return 0;
}