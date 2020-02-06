#include<iostream>
#include<vector>
using namespace std;

int main(){
	int x; cin>>x;
	int n; cin>>n;
	
	string names[n];
	int salary[n];
	int c=0;
	for(int i=0;i<n;i++){
		string name; cin>>name;
		int sal; cin>>sal;
		if(sal<x){
			continue;
		}
		names[c]= name;
		salary[c]= sal;
		c++;
	}
	cout<<endl;
		
	for(int i =0;i<c;i++){
		cout<<names[i]<<" "<<salary[i]<<endl;
	}

	

	return 0;
}