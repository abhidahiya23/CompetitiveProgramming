#include<bits/stdc++.h>
using namespace std;

int digitsum(string start,string end){

	int count =0;

	for(int i=0;i<end.length();i++){
		count+= abs(end[i]-start[i]);
	}

	return count%1000000007;
}
int total=0;
unordered_map<string,int> h;
void recSum(int a,int c,int b,int sum){
	string key = to_string(a) + " " + to_string(c);

	if(h.count(key))
		return ;

	if(b==c || a==5){
		total+=sum;
		//cout<<sum<<" ";
		return ; 
	}

	if(c>b || a>b)
		return;

	cout<<a<<" "<<c+1<<endl;
	recSum(a,c+1,b,sum+digitsum(to_string(a),to_string(c+1)));
	cout<<a+1<<" "<<c+2<<endl;
	recSum(a+1,c+2,b,sum+digitsum(to_string(a+1),to_string(c+2)));
	cout<<a+1<<" "<<c<<endl;
	recSum(a+1,c,b,sum+digitsum(to_string(a+1),to_string(c)));


}

int Diff(int a,int b){

	int sum =0;

	for(int i =a ;i<b;i++){
		for(int j=i+1;j<=b;j++){
			//cout<<i<<" "<<j<<endl;
			sum += digitsum(to_string(i),to_string(j));
			sum%=1000000007;
		}
		//cout<<endl;
	}

	return sum*2;
}

int main() {

	int a,b;
	cin>>a>>b;

	//cout<<Diff(a,b)<<endl;
	recSum(a,a,b,0);
	cout<<total<<endl;
}